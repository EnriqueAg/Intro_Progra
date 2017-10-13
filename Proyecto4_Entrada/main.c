#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int intVar, intVar2;
  float floatVar;
  
  printf("Teclea un numero entero ");
  scanf("%d",& intVar);
  printf("Usted tecleo el entero %d\n",intVar); 
  
  printf("Teclea dos numeros enteros ");
  scanf("%d %d",&intVar ,&intVar2); 
  printf("Usted tecleo los numero\n %d %d",intVar ,intVar2);
  
  printf("Teclea un numero real");
  scanf("%f",&floatVar);
  printf("El valor real ingresado es: %f",floatVar);
  
  system("PAUSE");	
  return 0;
}
