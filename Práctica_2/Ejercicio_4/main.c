#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int com, cant;
  int T=0;
  int uno=20;
  int dos=13;
  int tres=15;
  char c;
  
  printf("\n\nMENU:\n");
  printf("--------------------------------------\n\n");
  printf("1 Hamburguesa chica con papas y refresco   $20\n");
  printf("2 Hot dog y refresco                       $13\n");
  printf("3 Ensalada rusa                            $15\n");
  
  printf("\n\nSeleccione el producto y cantidad por favor\n");
  printf("Ejemplo: 1 4 \tEso significa que pidio 4 Hamburguesas\n\n");
  printf("Ingrese su orden: ");
  scanf("%d %d",&com ,&cant);
  switch(com){
             case 1: 
             T=uno*cant;
             printf("Pagar: %d",T);
             break;
             case 2: 
             T=dos*cant;
             printf("Pagar: %d",T);
             break;
             case 3: 
             T=tres*cant;
             printf("Pagar: %d",T);
             break;
             default: printf("Eso no esta en el menu");
             }
  printf("\n\nDesea algo mas? (Si=1 y No=2): ");
  scanf("%d",&c);
  while(c==1){
      printf("\nIngrese su orden: ");
      scanf("%d %d",&com ,&cant);
             switch(com){
             case 1:
             T=(uno*cant)+T;
             printf("Pagar: %d",T);
             break;
             case 2:
             T=(dos*cant)+T;
             printf("Pagar: %d",T);
             break;
             case 3:
             T=(tres*cant)+T;
             printf("Pagar: %d",T);
             break;
             default: printf("Eso no esta en el menu\n");
             }
    printf("\n\nDesea algo mas? (Si=1 / No=2): ");
    scanf("%d",&c);
                 }
    printf("Gracias por su compra!");  
  
  system("PAUSE");	
  return 0;
}
