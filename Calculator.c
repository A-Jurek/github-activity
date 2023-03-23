/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int subtract(int a, int b);
int add(int a, int b);
void multiply(int a, int b);

int main()
{
    printf("numbers: 5 and 4\n");
    int a = subtract(5,4);
    printf("%d",a);
    int b = add(5,4);
    printf("\n%d\n",b);
    multiply(5,4);

    return 0;
}
