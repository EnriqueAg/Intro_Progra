#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  const float PI=3.14159265;  
    
  float r, h;
  float g;
  float v, a;
  printf("\nIngrese el valor del radio: ");
  scanf("%f",&r);
  printf("\nIngrese el valor de la altura: ");
  scanf("%f",&h);
  
  v=((0.33333)*r*r*h*PI);
  printf("\n\nEl volumen es: %f",v);
  
  g=sqrt((r*r)+(h*h));
  a=2*PI*r*(g/2)+(PI*r*r);
  printf("\nEl area es: %f",a);
  
  system("PAUSE");	
  return 0;
}
