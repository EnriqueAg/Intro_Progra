#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  const float g=9.81;
  const float D=820;
  const float A=1000;
  char den;
  float pre;
  float d;
  float h;
  float V;
  
  printf("Ingrese D para Diesel, o A para Agua: ");
  scanf("%c",&den);
  printf("\nIngrese la presion hidrostatica: ");
  scanf("%f",&pre);
  printf("\nIngrese el diametro del cilindro: ");
  scanf("%f",&d);
  
  if(den=='D'){
  h=pre/(D*g);
  printf("\nLa altura es: %f",h);
  V=(3.1416)*(d/2)*(d/2)*h;
  printf("\nEl volumen es igual a: %f",V);
  
               }
  
  if(den=='A'){
  h=pre/(A*g);
  printf("\nLa altura es: %f",h); 
  V=(3.14)*(d/2)*(d/2)*h;
  printf("\nEl volumen es igual a: %f",V);            
               }
  
  system("PAUSE");	
  return 0;
}
