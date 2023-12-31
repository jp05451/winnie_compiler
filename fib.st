{% This test program computes the Nth Fibonacci number
    using recursion and iteration. %}

% global variables
const  n: int := 8
% iterative function
function itFibonacci (aaa: int,bbb:real) : int
  var Fn: int
  var FNminus1: int
  var temp: int


  Fn := temp
  
  FNminus1 := 1
  loop
    exit when (n <= 2) 
    temp := n
    Fn := Fn + FNminus1
    FNminus1 := temp
    n := n - 1
  end loop
  result Fn
end itFibonacci

% main program 
put "N: "
put n
skip
put "Result of iterative computation:  "
put itFibonacci(1,1.2)

