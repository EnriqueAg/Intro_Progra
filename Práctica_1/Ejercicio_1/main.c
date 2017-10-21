#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, b, x, y;
  int r;
  printf("Dada la forma: (x+y)^2(a-b)");
  
  printf("\n\nIngrese el valor de a: ");
  scanf("%d",&a);
  printf("\nIngrese el valor de b: ");
  scanf("%d",&b);
  printf("\nIngrese el valor de x: ");
  scanf("%d",&x);
  printf("\nIngrese el valor de y: ");
  scanf("%d",&y);
  
  r=(((x+y)*(x+y))*(a-b));
  
  printf("El resultado es: %d",r);
    
  
  system("PAUSE");	
  return 0;
}
