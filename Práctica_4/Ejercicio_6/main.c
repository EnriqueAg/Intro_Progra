#include <stdio.h>
#include <stdlib.h>
int n;
int main(int argc, char *argv[])
{
  int t;
  printf("\n\t\tFactorial de un número\n\nIngrese N: ");
  scanf("%d",&n);
  t=factorial(n);
  printf("El factorial es: %d\n",t);
  system("PAUSE");
  return 0;
}
int factorial(int n){
  int x;
  x=n;
  n=n-1;
  while(n>=2){
    x=x*n;
    n=n-1;
  }
  return x;
}
