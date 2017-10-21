#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float V, I, R;
  printf("Ingrese el Voltaje: ");
  scanf("%f",&V);
  printf("\nIngrese la Corriente: ");
  scanf("%f",&I);
  
  R=V/I;
  
  printf("\n\nLa Resistencia es: %f",R);
   
  system("PAUSE");	
  return 0;
}
