#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float x=0;
  float T,y;
  printf("Ingrese el numero de kwh consumidos: ");
  scanf("%f",&x);
  
  if(x<=50){
            T=(x*2.288)+52.84;
            printf("El total a pagar es: %f pesos.",T);
            }
  else{
       if(x<=100){
                    x=x-50;
                    T=(x*2.762)+(50*2.88)+52.84;
                    printf("El total a pagar es: %f pesotes.",T);
                    }
         else{
              x=x-100;
              T=(50*2.762)+(50*2.288)+(x*3.042)+52.84;
              printf("El total a pagar es: %f pesos.",T);
              }
         }

  system("PAUSE");	
  return 0;
}
