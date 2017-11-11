#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x;
  int y;
  printf("Dada la funcion: \n(x*x)-x para x menor o igual a 0 \n-(x*x)+(3*x) para x mayor a 0");  
  printf("\n\nIngrese el valor de x: ");
  scanf("%d",&x);
  if(x<=0){
       y=((x*x)-x);
       printf("El valor de la funcion es: %d",y);
        }
  else{
       y=((-(x*x))+(3*x));
       printf("El valor de la funcion es: %d",y);
       }
  
  system("PAUSE");	
  return 0;
}
