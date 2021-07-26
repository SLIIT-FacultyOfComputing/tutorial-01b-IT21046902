/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

long factorial(int no)//factorial function
{
 long fac = 1;
 
 for(int i=no; i>=1; i--)
 {
 fac = fac * i;
 }
 
 return fac;
}
long nCr(int n,int r)//nCr function 
{
 
 return factorial(n) / (factorial(r) * factorial(n-r));
}

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
