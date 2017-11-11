#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int ope;
  float n1=0;
  float n2=0;
  float T=0;
  int ov;
  
  Calculadora:
  printf("\n\nIngrese el primer dato: ");
  scanf("%f",&n1);
  printf("\nIngrese el segundo dato: ");
  scanf("%f",&n2);
  printf("\n\nOperadores: \n1 Suma\n2 Resta\n3 Multiplicacion \n4 Division");
  printf("\n\nIngrese su operador: ");
  scanf("%d",&ope);
  
  switch(ope){
         case 1:
         T=n1+n2;
         printf("El resultado es %f",T);
         break;
         case 2:
         T=n1-n2;
         printf("El resuldado es: %f",T);
         break;
         case 3:
         T=n1*n2;
         printf("El resultado es: %f",T);
         break;
         case 4:
         T=n1/n2;
         printf("El resultado es: %f",T);
         break;
         default: printf("Ese operador no esta en la lista");
         break;    
              }
  printf("\n\nDesea realizar otra operacion? (Si:1 No:2)  ");
  scanf("%d",&ov);
  if(ov==1){
  goto Calculadora;
  }
  
  system("PAUSE");	
  return 0;
}
