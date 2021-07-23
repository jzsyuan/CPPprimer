/*
        Character and Character String Literals
PREFIX          Meaning                   Type        
u         Unicode 16 character           char16_t  
U         Unicode 32 character           char32_t
L         wide charcter                  wchar_t
u8       utf-8 (string literals only)     char

    Integer Literals        Floating-Point Literals
  Suffix   Minimum Type        Suffix      Type
u or U      unsigned          f or F       float
l or L      long              l or L      long long
ll or LL    long long 

short << int << long << long long
float   32  bits
doubles 64  bits
long doubles 96/128 bits

signed  all  possible  numbers
unsigned >= 0 number
*/
#include <iostream>
using namespace std;
int main(){
  unsigned u = 11; // start the loop one past the first element we want to print
  while (u > 0) {
      --u; // decrement first, so that the last iteration will print 0
      std::cout << u << std::endl;
}
}
/*
This loop starts by decrementing the value of the loop control variable. On the last iteration, u will be 1 on entry to the loop.
We’ll decrement that value, meaning that we’ll print 0 on this iteration. When we next test u in the while condition, its value
will be 0 and the loop will exit. Because we start by decrementing u, we have to initialize u to a value one greater than the
first value we want to print. Hence, we initialize u to 11, so that the first value printed is 10.
*/