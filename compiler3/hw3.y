%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Trace(t) printf(t"\n")

int yyerror(char *msg);
int yylex();

#define MAX_LINE_LENG 256
#define symboltablelen  1000
#define symboltablestackmax 1000

typedef enum {
    INT_TYPE,
    BOOL_TYPE,
    STRING_TYPE,
    FUNCTION_TYPE,
    NULLTYPE,
} Datatype;


struct symbol {
    char name[MAX_LINE_LENG];
    int is_const;
    int is_global;
    int varn;
    char constVal[MAX_LINE_LENG];
    Datatype paramstype[100];
    int constnumVal;
    Datatype type;
    Datatype returnType;
};

struct symbol symboltable[symboltablestackmax][symboltablelen];
int symboltablestackid = -1;
int lcount=0;
int loopc=0;
int varcount=0;
FILE* out;
char classname[MAX_LINE_LENG];

int create();
struct symbol* lookup(char*,int);
int insert(struct symbol);
int dump();
int drop();
%}

/* tokens */
%token <strval> DOT COMMA COLON SEMICOLON LPARENTHESES RPARENTHESES LSQUAREBRACKETS RSQUAREBRACKETS LBRACKETS RBRACKETS ADDITION SUBTRACTION MULTIPLICATION DIVISION REMAINDER ASSIGNMENT RELATIONALL RELATIONALLE RELATIONALGE RELATIONALG RELATIONALE RELATIONALNOTE AND OR NOT ARRAY BEGIN_ BOOL CHAR CONST DECREASING DEFAULT DO ELSE END EXIT FALSE FOR FUNCTION GET IF INT OF PUT PROCEDURE REAL RESULT RETURN SKIP STRING TRUE THEN VAR WHEN NUMERICAL_CONSTANT IDENTIFIER STRING_CONSTANT
%token <info> LOOP
%type <info> expression expression_ invocations type

%start start
%union {
    char strval[MAX_LINE_LENG];
    struct symbol info;
}
%left OR
%left AND
%right NOT
%left RELATIONALE RELATIONALG RELATIONALGE RELATIONALNOTE RELATIONALL RELATIONALLE
%left ADDITION SUBTRACTION
%left MULTIPLICATION DIVISION REMAINDER 
%right UMINUS

%%

//constant
constant:
CONST IDENTIFIER COLON type ASSIGNMENT expression {
    struct symbol s;
    strcpy(s.name,$2);
    s.is_const=1;
    s.type = $6.type;
    s.constVal[0] = 0;
    if(s.type == STRING_TYPE){
        strcpy(s.constVal,$6.constVal);
    }else{
        s.constnumVal=$6.constnumVal;
    }
    insert(s);
}
| CONST IDENTIFIER ASSIGNMENT expression {
    struct symbol s;
    strcpy(s.name,$2);
    s.is_const=1;
    s.type = $4.type;
    s.constVal[0] = 0;
    if(s.type == STRING_TYPE){
        strcpy(s.constVal,$4.constVal);
    }else{
        s.constnumVal=$4.constnumVal;
    }
    insert(s);
}
;


expression:
expression ADDITION expression {
    $$.type = INT_TYPE;
    $$.is_const = 0;
    if($1.is_const && $3.is_const){
        $$.is_const = 1;
        $$.constnumVal = $1.constnumVal + $3.constnumVal;
    }else{
        if($1.is_const){
            fprintf(out,"sipush %d\n", $1.constnumVal);
        }
        if($3.is_const){
            fprintf(out,"sipush %d\n", $3.constnumVal);
        }
        fprintf(out,"iadd\n");
    }
    }
| expression SUBTRACTION expression {
    $$.type = INT_TYPE;
    $$.is_const = 0;
    if($1.is_const && $3.is_const){
        $$.is_const = 1;
        $$.constnumVal = $1.constnumVal - $3.constnumVal;
    }else{
        if($1.is_const){
            fprintf(out,"sipush %d\n", $1.constnumVal);
        }
        if($3.is_const){
            fprintf(out,"sipush %d\n", $3.constnumVal);
        }
        fprintf(out,"isub\n");
    }
    }
| expression MULTIPLICATION expression {
    $$.type = INT_TYPE;
    $$.is_const = 0;
    if($1.is_const && $3.is_const){
        $$.is_const = 1;
        $$.constnumVal = $1.constnumVal * $3.constnumVal;
    }else{
        if($1.is_const){
            fprintf(out,"sipush %d\n", $1.constnumVal);
        }
        if($3.is_const){
            fprintf(out,"sipush %d\n", $3.constnumVal);
        }
        fprintf(out,"imul\n");
    }
}
| expression DIVISION expression {
    $$.type = INT_TYPE;
    $$.is_const = 0;
    if($1.is_const && $3.is_const){
        $$.is_const = 1;
        $$.constnumVal = $1.constnumVal / $3.constnumVal;
    }else{
        if($1.is_const){
            fprintf(out,"sipush %d\n", $1.constnumVal);
        }
        if($3.is_const){
            fprintf(out,"sipush %d\n", $3.constnumVal);
        }
        fprintf(out,"idiv\n");
    }
}
| expression REMAINDER expression {
    $$.type = INT_TYPE;
    $$.is_const = 0;
    if($1.is_const && $3.is_const){
        $$.is_const = 1;
        $$.constnumVal = $1.constnumVal % $3.constnumVal;
    }else{
        if($1.is_const){
            fprintf(out,"sipush %d\n", $1.constnumVal);
        }
        if($3.is_const){
            fprintf(out,"sipush %d\n", $3.constnumVal);
        }
        fprintf(out,"irem\n");
    }
}
| expression RELATIONALE expression {
    $$.type = BOOL_TYPE;
    $$.is_const = 0;
    if($1.is_const && $3.is_const){
        $$.is_const = 1;
        $$.constnumVal = $1.constnumVal == $3.constnumVal;
    }else{
            if($1.is_const){
                if($1.type == INT_TYPE){
                    fprintf(out,"sipush %d\n", $1.constnumVal);
                }
                if($1.type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", $1.constnumVal);
                }
            }
            if($3.is_const){
                if($3.type == INT_TYPE){
                    fprintf(out,"sipush %d\n", $3.constnumVal);
                }
                if($3.type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", $3.constnumVal);
                }            
            }
            fprintf(out,"isub\n");
            fprintf(out,"ifeq L%d\n", lcount);
            fprintf(out,"iconst_0\n");
            fprintf(out,"goto L%d\n", lcount+1);
            fprintf(out,"L%d: iconst_1\n", lcount);
            fprintf(out,"L%d:\n", lcount+1);
            lcount+=2;
        }
    }
| expression RELATIONALG expression  {
    $$.type = BOOL_TYPE;
    $$.is_const = 0;
    if($1.is_const && $3.is_const){
        $$.is_const = 1;
        $$.constnumVal = $1.constnumVal > $3.constnumVal;
    }else{
            if($1.is_const){
                if($1.type == INT_TYPE){
                    fprintf(out,"sipush %d\n", $1.constnumVal);
                }
                if($1.type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", $1.constnumVal);
                }
            }
            if($3.is_const){
                if($3.type == INT_TYPE){
                    fprintf(out,"sipush %d\n", $3.constnumVal);
                }
                if($3.type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", $3.constnumVal);
                }            
            }
            fprintf(out,"isub\n");
            fprintf(out,"ifgt L%d\n", lcount);
            fprintf(out,"iconst_0\n");
            fprintf(out,"goto L%d\n", lcount+1);
            fprintf(out,"L%d: iconst_1\n", lcount);
            fprintf(out,"L%d:\n", lcount+1);
            lcount+=2;
        }
    }
| expression RELATIONALGE expression {
    $$.type = BOOL_TYPE;
    $$.is_const = 0;
    if($1.is_const && $3.is_const){
        $$.is_const = 1;
        $$.constnumVal = $1.constnumVal >= $3.constnumVal;
    }else{
            if($1.is_const){
                if($1.type == INT_TYPE){
                    fprintf(out,"sipush %d\n", $1.constnumVal);
                }
                if($1.type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", $1.constnumVal);
                }
            }
            if($3.is_const){
                if($3.type == INT_TYPE){
                    fprintf(out,"sipush %d\n", $3.constnumVal);
                }
                if($3.type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", $3.constnumVal);
                }            
            }
            fprintf(out,"isub\n");
            fprintf(out,"ifge L%d\n", lcount);
            fprintf(out,"iconst_0\n");
            fprintf(out,"goto L%d\n", lcount+1);
            fprintf(out,"L%d: iconst_1\n", lcount);
            fprintf(out,"L%d:\n", lcount+1);
            lcount+=2;
        }
    }
| expression RELATIONALL expression {
    $$.type = BOOL_TYPE;
    $$.is_const = 0;
    if($1.is_const && $3.is_const){
        $$.is_const = 1;
        $$.constnumVal = $1.constnumVal < $3.constnumVal;
    }else{
            if($1.is_const){
                if($1.type == INT_TYPE){
                    fprintf(out,"sipush %d\n", $1.constnumVal);
                }
                if($1.type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", $1.constnumVal);
                }
            }
            if($3.is_const){
                if($3.type == INT_TYPE){
                    fprintf(out,"sipush %d\n", $3.constnumVal);
                }
                if($3.type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", $3.constnumVal);
                }            
            }
            fprintf(out,"isub\n");
            fprintf(out,"iflt L%d\n", lcount);
            fprintf(out,"iconst_0\n");
            fprintf(out,"goto L%d\n", lcount+1);
            fprintf(out,"L%d: iconst_1\n", lcount);
            fprintf(out,"L%d:\n", lcount+1);
            lcount+=2;
        }
}
| expression RELATIONALLE expression {
    $$.type = BOOL_TYPE;
    $$.is_const = 0;
    if($1.is_const && $3.is_const){
        $$.is_const = 1;
        $$.constnumVal = $1.constnumVal <= $3.constnumVal;
    }else{
            if($1.is_const){
                if($1.type == INT_TYPE){
                    fprintf(out,"sipush %d\n", $1.constnumVal);
                }
                if($1.type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", $1.constnumVal);
                }
            }
            if($3.is_const){
                if($3.type == INT_TYPE){
                    fprintf(out,"sipush %d\n", $3.constnumVal);
                }
                if($3.type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", $3.constnumVal);
                }            
            }
            fprintf(out,"isub\n");
            fprintf(out,"ifle L%d\n", lcount);
            fprintf(out,"iconst_0\n");
            fprintf(out,"goto L%d\n", lcount+1);
            fprintf(out,"L%d: iconst_1\n", lcount);
            fprintf(out,"L%d:\n", lcount+1);
            lcount+=2;
        }
    }
| expression RELATIONALNOTE expression {
    $$.type = BOOL_TYPE;
    $$.is_const = 0;
    if($1.is_const && $3.is_const){
        $$.is_const = 1;
        $$.constnumVal = $1.constnumVal != $3.constnumVal;
    }else{
            if($1.is_const){
                if($1.type == INT_TYPE){
                    fprintf(out,"sipush %d\n", $1.constnumVal);
                }
                if($1.type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", $1.constnumVal);
                }
            }
            if($3.is_const){
                if($3.type == INT_TYPE){
                    fprintf(out,"sipush %d\n", $3.constnumVal);
                }
                if($3.type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", $3.constnumVal);
                }            
            }
            fprintf(out,"isub\n");
            fprintf(out,"ifne L%d\n", lcount);
            fprintf(out,"iconst_0\n");
            fprintf(out,"goto L%d\n", lcount+1);
            fprintf(out,"L%d: iconst_1\n", lcount);
            fprintf(out,"L%d:\n", lcount+1);
            lcount+=2;
        }
    }
| expression AND expression {
    $$.type = BOOL_TYPE;
    $$.is_const = 0;
    if($1.type == BOOL_TYPE && $3.type == BOOL_TYPE){
        if($1.is_const && $3.is_const){
        $$.is_const = $1.is_const;
        $$.constnumVal = $1.constnumVal && $3.constnumVal;
        }else{
            if($1.is_const){
                fprintf(out,"iconst_%d\n", $1.constnumVal);
            }
            if($3.is_const){
                fprintf(out,"iconst_%d\n", $3.constnumVal);
            }
            fprintf(out,"iand\n");
        }
    }
    }
| expression OR expression {
    $$.type = BOOL_TYPE;
    $$.is_const = 0;
    if($1.type == BOOL_TYPE && $3.type == BOOL_TYPE ){
        if( $1.is_const && $3.is_const){
            $$.is_const = 1;
            $$.constnumVal = $1.constnumVal ||  $3.constnumVal;
        }else{
            if($1.is_const){
                fprintf(out,"iconst_%d\n", $1.constnumVal);
            }
            if($3.is_const){
                fprintf(out,"iconst_%d\n", $3.constnumVal);
            }
            fprintf(out,"ior\n");
        }
    }
}
| NOT expression {
    $$.type = BOOL_TYPE;
    $$.is_const = $2.is_const;
    if($2.type == BOOL_TYPE && $2.is_const){
        $$.constnumVal = !$2.constnumVal;
    }
    if(!$2.is_const){
        fprintf(out,"iconst_1\n");
        fprintf(out,"ixor\n");
    }
    }
| SUBTRACTION expression {
    $$.type = INT_TYPE;
    $$.is_const = $2.is_const;
    if($2.type == INT_TYPE && $2.is_const){
        $$.constnumVal = -$2.constnumVal;
    }
    if(!$2.is_const){
        fprintf(out,"ineg\n");
    }
} %prec UMINUS
| LPARENTHESES expression RPARENTHESES {
    $$.type = $2.type;
    $$.is_const = $2.is_const;
    $$.returnType = $2.returnType;
    if($$.is_const){
    $$.constnumVal = $2.constnumVal;
    strcpy($$.constVal, $2.constVal);
    }
}
| expression_ {
    $$.type = $1.type;
    $$.is_const = $1.is_const;
    $$.returnType = $1.returnType;
    if($$.is_const){
    $$.constnumVal = $1.constnumVal;
    strcpy($$.constVal,$1.constVal);
    }
}
;



expression_:
IDENTIFIER {
    struct symbol *s  =lookup($1,1);
    $$.type = s->type;
    $$.is_const = s->is_const;
    if(s->is_const){
        strcpy($$.constVal,s->constVal);
        $$.constnumVal =  s->constnumVal;
    }else{
        char* type;
        if(s->type == INT_TYPE){
            type = "int";
        }
        if(s->type == BOOL_TYPE){
            type = "boolean";
        }
        if(s->is_global){
            fprintf(out,"getstatic %s %s.%s\n",type ,classname ,$1);
        }else{
            fprintf(out,"iload %d\n",s->varn);
        }
    }
}
| STRING_CONSTANT {
    $$.type = STRING_TYPE;
    $$.is_const = 1;
    strcpy($$.constVal,$1);
}
| NUMERICAL_CONSTANT {
    $$.type = INT_TYPE;
    $$.is_const = 1;
    $$.constnumVal = atoi($1);
}
| TRUE {
    $$.type = BOOL_TYPE;
    $$.is_const = 1;
    $$.constnumVal = 1;
}
| FALSE {
    $$.type = BOOL_TYPE;
    $$.is_const = 1;
    $$.constnumVal = 0;
}
| invocations {
    $$.type = $1.type;
    $$.is_const = 0;
}
;

type:
INT {$$.type = INT_TYPE;}
|BOOL {$$.type = BOOL_TYPE;}
|STRING {$$.type = STRING_TYPE;}
;

//Variables
variable:
VAR IDENTIFIER ASSIGNMENT expression {
    struct symbol s;
    strcpy(s.name,$2);
    s.is_const=0;
    s.type = $4.type;
    char* type;
    if($4.type == INT_TYPE){
        type = "int";
    }
    if($4.type == BOOL_TYPE){
        type = "boolean";
    }
    if(symboltablestackid==0){
        //global
        s.is_global=1;
        fprintf(out,"field static %s %s = %d\n",type,$2,$4.constnumVal);
    }else{
        s.is_global=0;
        s.varn=varcount;
        varcount++;
        if($4.is_const){
            if($4.type == INT_TYPE){
                fprintf(out,"sipush %d\n", $4.constnumVal);
            }
            if($4.type == BOOL_TYPE){
                fprintf(out,"iconst_%d\n", $4.constnumVal);
            }
        }
        fprintf(out,"istore %d\n",s.varn);
    }
    insert(s);
}
| VAR IDENTIFIER COLON type  {
    struct symbol s;
    strcpy(s.name,$2);
    s.is_const=0;
    s.type = $4.type;
    if(symboltablestackid==0){
        //global
        s.is_global=1;
        char* type;
        if($4.type == INT_TYPE){
            type = "int";
        }
        if($4.type == BOOL_TYPE){
            type = "boolean";
        }
        fprintf(out,"field static %s %s\n",type,$2);
    }else{
        s.is_global=0;
        s.varn=varcount;
        varcount++;
    }
    insert(s);
}
| VAR IDENTIFIER COLON type ASSIGNMENT expression {
    struct symbol s;
    strcpy(s.name,$2);
    s.is_const=0;
    s.type = $6.type;

    if(symboltablestackid==0){
        //global
        s.is_global=1;
        char* type;
        if($4.type == INT_TYPE){
            type = "int";
        }
        if($4.type == BOOL_TYPE){
            type = "boolean";
        }
        fprintf(out,"field static %s %s = %d\n",type,$2,$6.constnumVal);
    }else{
        s.is_global=0;
        s.varn=varcount;
        varcount++;
        if($6.is_const){
            if($6.type == INT_TYPE){
                fprintf(out,"sipush %d\n", $6.constnumVal);
            }
            if($6.type == BOOL_TYPE){
                fprintf(out,"iconst_%d\n", $6.constnumVal);
            }
        }
        fprintf(out,"istore %d\n",s.varn);
    }
    insert(s);
}
;

start:
{create();}_start {dump();drop();}
;

_start:
{
    fprintf(out, "\tmethod public static void main(java.lang.String[])\n");
    fprintf(out, "\tmax_stack 15\n");
    fprintf(out, "\tmax_locals 15\n");
    fprintf(out, "\t{\n");
    fprintf(out, "\t\treturn\n");
    fprintf(out, "\t}\n");
}
| program_a program_b
| program_a {
    fprintf(out, "\tmethod public static void main(java.lang.String[])\n");
    fprintf(out, "\tmax_stack 15\n");
    fprintf(out, "\tmax_locals 15\n");
    fprintf(out, "\t{\n");
    fprintf(out, "\t\treturn\n");
    fprintf(out, "\t}\n");
}
| program_b
;

program_a:
program_a_ program_a
| program_a_
;

program_a_:
constant 
| variable 
| function
| procedure
;

function:
FUNCTION IDENTIFIER {
    struct symbol s;
    strcpy(s.name,$2);
    s.is_const=0;
    s.is_global=1;
    s.type = FUNCTION_TYPE;
    insert(s);
    create();
    varcount=0;
} LPARENTHESES params RPARENTHESES COLON type {
    struct symbol *fn =     lookup($2,1);
    fn->returnType = $8.type;
    char* type;
    if($8.type == INT_TYPE){
        type = "int";
    }
    if($8.type == BOOL_TYPE){
        type = "boolean";
    }
    fprintf(out, "method public static %s %s(",type,$2);
    int i =0;
    while(symboltable[symboltablestackid][i].name[0]!='\0'){
        fn->paramstype[i] = symboltable[symboltablestackid][i].type;
        
        char* type;
        if(symboltable[symboltablestackid][i].type == INT_TYPE){
            type = "int";
        }
        if(symboltable[symboltablestackid][i].type == BOOL_TYPE){
            type = "boolean";
        }
        if(i==0){
            fprintf(out, "%s", type);
        }else{
            fprintf(out, ", %s", type);
        }
        i++;
    }
    fn->paramstype[i] = NULLTYPE;
    fprintf(out, ")\n");
    fprintf(out, "max_stack 15\n");
    fprintf(out, "max_locals 15\n");
    fprintf(out, "{\n");
}
function_body
END IDENTIFIER  {
    if(strcmp($2,$12)==0){
    dump();
    drop();
    }else{
        printf("error 157");
    }

    if($8.type == INT_TYPE){
        fprintf(out, "sipush 0\n");
    }
    if($8.type == BOOL_TYPE){
        fprintf(out, "iconst_0\n");
    }
    fprintf(out, "ireturn\n");
    fprintf(out, "}\n");
}
;

function_body:
| function_body_ function_body
;

function_body_:
variable
| constant
| statement
;

params:
| param COMMA params
| param
;

param:
IDENTIFIER COLON type {
    struct symbol s;
    strcpy(s.name,$1);
    s.is_const=0;
    s.is_global=0;
    s.varn=varcount;
    varcount++;
    s.type = $3.type;
    insert(s);
    }
;

procedure:
PROCEDURE IDENTIFIER {
    struct symbol s;
    strcpy(s.name,$2);
    s.is_const=0;
    s.is_global=1;
    s.type = FUNCTION_TYPE;
    s.returnType = NULLTYPE;
    insert(s);
    create();
    varcount=0;
} LPARENTHESES params RPARENTHESES
{
    struct symbol *fn =     lookup($2,1);
    fprintf(out, "method public static void %s(",$2);
    int i =0;
    while(symboltable[symboltablestackid][i].name[0]!='\0'){
        fn->paramstype[i] = symboltable[symboltablestackid][i].type;

        char* type;
        if(symboltable[symboltablestackid][i].type == INT_TYPE){
            type = "int";
        }
        if(symboltable[symboltablestackid][i].type == BOOL_TYPE){
            type = "boolean";
        }
        if(i==0){
            fprintf(out, "%s", type);
        }else{
            fprintf(out, ", %s", type);
        }
        i++;
    }
    fn->paramstype[i] = NULLTYPE;

    fprintf(out, ")\n");
    fprintf(out, "max_stack 15\n");
    fprintf(out, "max_locals 15\n");
    fprintf(out, "{\n");
}
function_body
END IDENTIFIER  {
    if(strcmp($2,$10)==0){
    dump();
    drop();
    }else{
        printf("error 157");
    }

    fprintf(out, "return\n");
    fprintf(out, "}\n");
}
;

program_b:
{
    varcount=0;
    fprintf(out, "\tmethod public static void main(java.lang.String[])\n");
    fprintf(out, "\tmax_stack 15\n");
    fprintf(out, "\tmax_locals 15\n");
    fprintf(out, "\t{\n");
} program_b_ {
    fprintf(out, "\t\treturn\n");
    fprintf(out, "\t}\n");
}
;

program_b_:
statement program_b_
| statement
;

statement:
block
| simple
| conditional
| loop
| invocations
;

block:
BEGIN_ {create();} function_body END  {dump();drop();}
;

simple:
PUT {
    fprintf(out,"getstatic java.io.PrintStream java.lang.System.out\n");
} expression {
    if($3.is_const){
        if($3.type == STRING_TYPE){
            char t[MAX_LINE_LENG];
            t[0]=$3.constVal[0];
            for(int i =1,j=1;i<MAX_LINE_LENG && j<MAX_LINE_LENG;i++){
                if($3.constVal[i]=='"' && $3.constVal[i+1]!=0){
                    t[j]='\\';
                    j++;
                }
                t[j]=$3.constVal[i];
                if($3.constVal[i]=0){
                    break;
                }
                j++;
            }
            fprintf(out,"ldc %s\n", t);
        }
        if($3.type == INT_TYPE){
            fprintf(out,"sipush %d\n", $3.constnumVal);
        }
        if($3.type == BOOL_TYPE){
            fprintf(out,"iconst_%d\n", $3.constnumVal);
        }
    }
    if($3.type == STRING_TYPE){
        fprintf(out,"invokevirtual void java.io.PrintStream.print(java.lang.String)\n");
    }
    if($3.type == INT_TYPE){
        fprintf(out,"invokevirtual void java.io.PrintStream.print(int)\n");
    }
    if($3.type == BOOL_TYPE){
        fprintf(out,"invokevirtual void java.io.PrintStream.print(boolean)\n");
    }
}
| SKIP {
    fprintf(out, "getstatic java.io.PrintStream java.lang.System.out\n");
    fprintf(out, "invokevirtual void java.io.PrintStream.println()\n");
}
| IDENTIFIER ASSIGNMENT expression {
    if($3.is_const){
        if($3.type == INT_TYPE){
            fprintf(out,"sipush %d\n", $3.constnumVal);
        }
        if($3.type == BOOL_TYPE){
            fprintf(out,"iconst_%d\n", $3.constnumVal);
        }
    }
    struct symbol *s  =lookup($1,1);
    char* type;
    if(s->type == INT_TYPE){
        type = "int";
    }
    if(s->type == BOOL_TYPE){
        type = "boolean";
    }
    if(s->is_global){
        fprintf(out, "putstatic %s %s.%s\n",type,classname,$1);
    }else{
        fprintf(out,"istore %d\n",s->varn);
    }

}
| EXIT WHEN expression {
    if($3.is_const){
        fprintf(out,"iconst_%d\n", $3.constnumVal);
    }
    fprintf(out, "ifne Loopexit%d\n", loopc);
}
| EXIT {
    fprintf(out, "goto Loopexit%d\n", loopc);
}
| RESULT expression
{
    if($2.is_const){
        if($2.type == INT_TYPE){
            fprintf(out,"sipush %d\n", $2.constnumVal);
        }
        if($2.type == BOOL_TYPE){
            fprintf(out,"iconst_%d\n", $2.constnumVal);
        }
    }
    fprintf(out, "ireturn\n");
}
| RETURN{
    fprintf(out, "return\n");
}
;

conditional:
IF expression THEN {
    if($2.is_const){
        fprintf(out,"iconst_%d\n", $2.constnumVal);
    }
    $2.varn = lcount;
    lcount++;
    fprintf(out, "ifeq Lelse%d\n", $2.varn);
    create();
} function_body {
    dump();drop();
    fprintf(out, "goto Lexit%d\n", $2.varn);
    fprintf(out, "Lelse%d:\n", $2.varn);
    fprintf(out, "nop\n");
} opt_else END IF
{
    fprintf(out, "Lexit%d:\n", $2.varn);
    fprintf(out, "nop\n");
}  
;

opt_else:
|ELSE {create();} function_body {dump();drop();} 
;

loop:
LOOP {
    create();
    $1.varn = loopc;
    loopc = lcount;
    lcount++;
    fprintf(out, "Lbegin%d:\n", loopc);
} function_body END LOOP  {
    fprintf(out, "goto Lbegin%d\n", loopc);
    fprintf(out, "Loopexit%d:\n", loopc);
    fprintf(out, "nop\n");
    loopc = $1.varn;
    dump();
    drop();
}
| forloop
;

forloop:
FOR DECREASING IDENTIFIER COLON expression {
    // i=0
    if($5.is_const){
        fprintf(out,"sipush %d\n", $5.constnumVal);    
    }
    struct symbol *s  =lookup($3,1);
    if(s->is_global){
        fprintf(out, "putstatic int %s.%s\n",classname,$3);
    }else{
        fprintf(out,"istore %d\n",s->varn);
    }
    $5.varn = loopc;
    loopc = lcount;
    lcount++;
    fprintf(out, "Lbegin%d:\n", loopc);
    if(s->is_global){
        fprintf(out,"getstatic int %s.%s\n" ,classname ,$3);
    }else{
        fprintf(out,"iload %d\n",s->varn);
    }
} DOT DOT expression {
    // i>=n
    if($9.is_const){
        fprintf(out,"sipush %d\n", $9.constnumVal);
    }
    fprintf(out, "isub\n");
    fprintf(out, "iflt Loopexit%d\n", loopc);
    create();
} function_body END FOR  {
    // i--
    struct symbol *s = lookup($3,1);
    if(s->is_global){
        fprintf(out,"getstatic int %s.%s\n" ,classname ,$3);
    }else{
        fprintf(out,"iload %d\n",s->varn);
    }
    fprintf(out, "sipush 1\n");
    fprintf(out, "isub\n");
    if(s->is_global){
        fprintf(out, "putstatic int %s.%s\n",classname,$3);
    }else{
        fprintf(out,"istore %d\n",s->varn);
    }

    fprintf(out, "goto Lbegin%d\n", loopc);
    fprintf(out, "Loopexit%d:\n", loopc);
    fprintf(out, "nop\n");
    loopc = $5.varn;
    dump();drop();
}
| FOR IDENTIFIER COLON expression {
    // i=0
    if($4.is_const){
        fprintf(out,"sipush %d\n", $4.constnumVal);    
    }
    struct symbol *s  =lookup($2,1);
    if(s->is_global){
        fprintf(out, "putstatic int %s.%s\n",classname,$2);
    }else{
        fprintf(out,"istore %d\n",s->varn);
    }
    $4.varn = loopc;
    loopc = lcount;
    lcount++;
    fprintf(out, "Lbegin%d:\n", loopc);
    if(s->is_global){
        fprintf(out,"getstatic int %s.%s\n" ,classname ,$2);
    }else{
        fprintf(out,"iload %d\n",s->varn);
    }
} DOT DOT expression {
    // i<=n
    if($8.is_const){
        fprintf(out,"sipush %d\n", $8.constnumVal);
    }
    fprintf(out, "isub\n");
    fprintf(out, "ifgt Loopexit%d\n", loopc);
    create();
}function_body END FOR  {
    // i++
    struct symbol *s = lookup($2,1);
    if(s->is_global){
        fprintf(out,"getstatic int %s.%s\n" ,classname ,$2);
    }else{
        fprintf(out,"iload %d\n",s->varn);
    }
    fprintf(out, "sipush 1\n");
    fprintf(out, "iadd\n");
    if(s->is_global){
        fprintf(out, "putstatic int %s.%s\n",classname,$2);
    }else{
        fprintf(out,"istore %d\n",s->varn);
    }

    fprintf(out, "goto Lbegin%d\n", loopc);
    fprintf(out, "Loopexit%d:\n", loopc);
    fprintf(out, "nop\n");
    loopc = $4.varn;
    dump();
    drop();
}
;


invocations:
IDENTIFIER LPARENTHESES args RPARENTHESES {
    struct symbol *fn =     lookup($1,1);
    $$.type = fn->returnType;
    char* type;
    if(fn->returnType == INT_TYPE){
        type = "int";
    }
    if(fn->returnType == BOOL_TYPE){
        type = "boolean";
    }
    if(fn->returnType == NULLTYPE){
        type = "void";
    }
    fprintf(out, "invokestatic %s %s.%s(",type,classname,$1);
    // int, int)
    int i=0;
    while(fn->paramstype[i] != NULLTYPE){
        char* type;
        if(fn->paramstype[i] == INT_TYPE){
            type = "int";
        }
        if(fn->paramstype[i] == BOOL_TYPE){
            type = "boolean";
        }
        if(i==0){
            fprintf(out, "%s", type);
        }else{
            fprintf(out, ", %s", type);
        }
        i++;
    }
    fprintf(out, ")\n");
}
;

args:
| args_
;

args_:
expression {
    if($1.is_const){
        if($1.type == INT_TYPE){
            fprintf(out,"sipush %d\n", $1.constnumVal);
        }
        if($1.type == BOOL_TYPE){
            fprintf(out,"iconst_%d\n", $1.constnumVal);
        }
    }
}
COMMA args_
| expression {
    if($1.is_const){
        if($1.type == INT_TYPE){
            fprintf(out,"sipush %d\n", $1.constnumVal);
        }
        if($1.type == BOOL_TYPE){
            fprintf(out,"iconst_%d\n", $1.constnumVal);
        }
    }
}
;

%%

#include "lex.yy.c"
extern FILE* yyin;


// create
int create(){
    symboltablestackid++;
    for(int i=0;i<symboltablelen;i++){
        symboltable[symboltablestackid][i].name[0]= 0;
        symboltable[symboltablestackid][i].is_const = 0;
    }
}
// lookup
struct symbol* lookup(char* s, int up){
    int stid = symboltablestackid;
    while(stid>=0){

    for(int i=0;i<symboltablelen;i++){
        if(strcmp(s,symboltable[stid][i].name)==0){
            return &symboltable[stid][i];
        }
    }
    if(up==0){
        return NULL;
    }else{
        stid--;
    }
    }
    }
// insert
int insert(struct symbol s){
    // printf("insert: %s\n", s.name);
    if(lookup(s.name,0)==NULL){
        for(int i=0;i<symboltablelen;i++){
            if (symboltable[symboltablestackid][i].name[0]=='\0'){
                strcpy(symboltable[symboltablestackid][i].name,s.name);
                symboltable[symboltablestackid][i].is_const = s.is_const;
                symboltable[symboltablestackid][i].is_global = s.is_global;
                symboltable[symboltablestackid][i].varn = s.varn;
                strcpy(symboltable[symboltablestackid][i].constVal,s.constVal);
                symboltable[symboltablestackid][i].constnumVal = s.constnumVal;
                symboltable[symboltablestackid][i].type = s.type;
                symboltable[symboltablestackid][i].returnType = s.returnType;
                return 0;
            }
        }
    }
}
// dump
int dump(){
    printf("\nSymbol Table:\n");
    for(int i=0;i<symboltablelen;i++){
        if (symboltable[symboltablestackid][i].name[0]!='\0'){
            printf("%s\n", symboltable[symboltablestackid][i].name);
        }else break;
    }
}

int drop(){
    symboltablestackid--;
}


int yyerror(char *msg)
{
    fprintf(stderr, "line %d: %s\n: %s\n", linenum, msg, yytext);
}


int main(int argc, char *argv[])
{
    /* open the source program file */
    if (argc != 2) {
        printf ("Usage: hw2 filename\n");
        exit(1);
    }
    yyin = fopen(argv[1], "r"); /* open input file */
    classname[0]=0;
    strcpy(classname,argv[1]);
    char* p = strstr(classname,".st"); 
    *p = '\0';
    char outname[MAX_LINE_LENG];
    outname[0]=0;
    strcpy(outname,classname);
    strcat(outname,".a");

    // printf("%s\n",outname);
    out = fopen(outname, "w");

    // file start
    fprintf(out, "class %s\n", classname);
    fprintf(out, "{\n");

    /* perform parsing */
    if (yyparse() == 1) /* parsing */
    yyerror("Parsing error !"); /* syntax error */
    else printf("success!\n");

    // end
    fprintf(out, "}\n");

    fclose(out);
    fclose(yyin);
}