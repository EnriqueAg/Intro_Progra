#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  float y;
  float x;
  float s=0.5; 
  int i; 
  printf("f(x)=sin(2x)-x\n\n");
  
  for(i=0;i<=20;i++){
      y=(2*(sin(x*3.1416/180))*(cos(x*3.1416/180))-x);
      printf("El valor de f(x) evaluada en %f es: %f\n",x ,y);
      x=x+s;           
                       }
    
  system("PAUSE");	
  return 0;
}
