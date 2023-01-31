JobID: cp264-a2
Name: Roshni Mahindru
ID: 210756010

Statement: I claim that the enclosed submission is my individual work.

Fill in the self-evaluation in the following evaluation grid.
Symbols:  A - Assignment, Q - Question, T - Task
Field format: [self-evaluation/total marks/marker's evaluation]

For example, you put your self-evaluation, say 2, like [2/2/*]. 
If markers give different evaluation value, say 1, it will show 
[2/2/1] in the marking report. 

Grade_Item_ID [self-evaluation/total/marker-evaluation] Description


Q1 Computing Fibonacci numbers
Q1.1 [3/3/*] recursive_fibonacci()                   
Q1.2 [5/5/*] iterative_fibonacci()                   

Q2 Array & polynomial
Q2.1 [4/4/*] horner()                                
Q2.2 [4/4/*] derivative()                            
Q2.3 [4/4/*] newton()                                

Q3 Vector, Matrix
Q3.1 [1/2/*] vsum(), msum()                          
Q3.2 [1/2/*] transpose_matrix()                      
Q3.3 [2/3/*] multiply_matrix()                       
Q3.4 [2/3/*] multiply_vector()                       

Total: [26/30/*]

Copy and paste the console output of your public test in the following. 
This will help markers to evaluate your program if it fails the marking tests.  

Q1 output:

**Iterative algorithm measurement**
iterative_fibonacci(40):102334155
high address:6166540812
low address:6166540684
iterative_fibonacci(40) memory span:128
time_span(iterative_fibonacci(40) for 500000 times):65435.0 (ms)

**Recursive algorithm measurement**
recursive_fibonacci(40):102334155
high address:6166540812
low address:6166539448
recursive_fibonacci(40) memory span:1364
time_span(recursive_fibonacci(40) for 10 times) in (ms):7647822.0

**Comparison of recursive and iterative algorithms**
memory_span(recursive_fibonacci(40))/memory_span(iterative_fibonacci(40)):10.7
time_span(recursive_fibonacci(40))/time_span(iterative_fibonacci(40)):5843831.3

Q2 output:

p(0.00)=1.00*0.00^3+2.00*0.00^2+3.00*0.00^1+4.00*0.00^0=4.00
p(1.00)=1.00*1.00^3+2.00*1.00^2+3.00*1.00^1+4.00*1.00^0=10.00
p(10.00)=1.00*10.00^3+2.00*10.00^2+3.00*10.00^1+4.00*10.00^0=1234.00
d(0.00)=3.00*0.00^2+4.00*0.00^1+3.00*0.00^0=3.00
d(1.00)=3.00*1.00^2+4.00*1.00^1+3.00*1.00^0=10.00
d(10.00)=3.00*10.00^2+4.00*10.00^1+3.00*10.00^0=343.00
root=-1.65
p(-1.65)=0.00

Q3 output:

Undefined symbols for architecture arm64:
  "_msum", referenced from:
      _main in matrix_main-35cf50.o
  "_multiply_matrix", referenced from:
      _main in matrix_main-35cf50.o
  "_multiply_vector", referenced from:
      _main in matrix_main-35cf50.o
  "_transpose_matrix", referenced from:
      _main in matrix_main-35cf50.o
  "_vsum", referenced from:
      _main in matrix_main-35cf50.o
ld: symbol(s) not found for architecture arm64
clang: error: linker command failed with exit code 1 (use -v to see invocation)