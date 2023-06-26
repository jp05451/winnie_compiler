%{
#define LIST     strcat(buf,yytext)
#define token(t,s) {LIST; strcpy(yylval.strval,s); return t;}
#define tokenString(t,ts,s) {LIST; /*printf("<%s:%s>\n",ts,s);*/ strcpy(yylval.strval,s); return t;}


#define MAX_LINE_LENG 256

#include "string.h"

int linenum = 1;
char buf[MAX_LINE_LENG];
char strbuf[MAX_LINE_LENG];

%}
%x COMMENT
%x STRING_STATE

%%
"." {token(DOT, "DOT");}
, {token(COMMA, "COMMA");}
: {token(COLON, "COLON");}
"(" {token(LPARENTHESES, "LPARENTHESES");}
")" {token(RPARENTHESES, "RPARENTHESES");}
"{" {token(LBRACKETS, "LBRACKETS");}
"}" {token(RBRACKETS, "RBRACKETS");}

"+" {token(ADDITION, "ADDITION");}
"-" {token(SUBTRACTION, "SUBTRACTION");}
"*" {token(MULTIPLICATION, "MULTIPLICATION");}
"/" {
        strcat(buf,"\\");
        token(DIVISION, "DIVISION");
}
"mod" {token(REMAINDER, "REMAINDER");}
":=" {token(ASSIGNMENT, "ASSIGNMENT");}
"<" {token(RELATIONALL, "RELATIONALL");}
"<=" {token(RELATIONALLE, "RELATIONALLE");}
">=" {token(RELATIONALGE, "RELATIONALGE");}
">" {token(RELATIONALG, "RELATIONALG");}
"=" {token(RELATIONALE, "RELATIONALE");}
"not=" {token(RELATIONALNOTE, "RELATIONALNOTE");}
"and" {token(AND, "AND");}
"or" {token(OR, "OR");}
"not" {token(NOT, "NOT");}

begin  {token(BEGIN_, "BEGIN");}
bool  {token(BOOL, "BOOL");}
const  {token(CONST, "CONST");}
decreasing  {token(DECREASING, "DECREASING");}
do {token(DO, "DO");}
else  {token(ELSE, "ELSE");}
end  {token(END, "END");}
exit {token(EXIT, "EXIT");}
false  {token(FALSE, "FALSE");}
for  {token(FOR, "FOR");}
function  {token(FUNCTION, "FUNCTION");}
if  {token(IF, "IF");}
then        {token(THEN, "THEN");}
int         {token(INT, "INT");}
loop        {token(LOOP, "LOOP");}
put         {token(PUT, "PUT");}
procedure       {token(PROCEDURE, "PROCEDURE");}
result          {token(RESULT, "RESULT");}
return      {token(RETURN, "RETURN");}
skip        {token(SKIP, "SKIP");}
string      {token(STRING, "STRING");}
true        {token(TRUE, "TRUE");}
var         {token(VAR, "VAR");}
when        {token(WHEN, "WHEN");}

[a-zA-Z][0-9a-zA-Z]* {
    // printf("80: %s\n",s.name);
    tokenString(IDENTIFIER,"IDENTIFIER",yytext);
}
[0-9]+ {tokenString(NUMERICAL_CONSTANT,"NUMERICAL_CONSTANT",yytext);}

\" { LIST; BEGIN STRING_STATE; strbuf[0]='\0'; strcat(strbuf,yytext);}
<STRING_STATE>\"\" { LIST; strcat(strbuf,"\"");}
<STRING_STATE>\" {
                strcat(strbuf,yytext);
                BEGIN INITIAL;
                tokenString(STRING_CONSTANT,"STRING_CONSTANT",strbuf);
                 }
<STRING_STATE>. { LIST;
                strcat(strbuf,yytext);
                }
<STRING_STATE>\n {
    printf("nl in str\n");
        LIST;
        strcat(strbuf,yytext);
        // printf("%d: %s", linenum++, buf);
        buf[0] = '\0';
        }


%.*   {
        LIST;
        }
"{%"     {
        LIST;
            BEGIN COMMENT;
        }
<COMMENT>"%}" { 
            LIST;
                BEGIN INITIAL; 
            }
<COMMENT>.    {LIST;}
<COMMENT>\n  |
\n      {
        fprintf(out, "/* %d: %s */\n", linenum, buf);
        LIST;
        //printf("%d: %s", linenum, buf);
        linenum++;
        buf[0] = '\0';
        }

[ \t]*  {LIST;}

.       {
        LIST;
        printf("%d: %s\n", linenum++, buf);
        printf("bad character:'%s'\n",yytext);
        exit(-1);
        }
%%
