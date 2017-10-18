#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int x;
  printf("Cuantos numeros desea ingresar? ");
  scanf("%d",&x);
  float n[x];
  
  int y=1;
  float s=0;
  while(y<=x){
      printf("\nIngrese el valor: ");
      scanf("%f",&n[y]);
      s=s+n[y];        
      y=y+1;        
              }
  
  float p=0;
  p=s/x;
  printf("\nEl promedio es igual a: %f",p);            
  
  
  system("PAUSE");	
  return 0;
}
