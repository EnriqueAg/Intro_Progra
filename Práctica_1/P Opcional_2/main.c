#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
  int diez, cinco, dos, uno;
  int d;
  printf("Ingrese la cantidad de dinero: ");
  scanf("%d",&d);
  
  diez=d/10;
  d=d-(diez*10);
  cinco=d/5;
  d=d-(cinco*5);
  dos=d/2;
  d=d-(dos*2);
  uno=d;
  
  printf("\n\nMonedas de 10 pesos: %d",diez);
  printf("\nMonedas de 5 pesos: %d",cinco);
  printf("\nMonedas de 2 pesos: %d",dos);
  printf("\nMonedas de 1 peso: %d",uno);
  
  system("PAUSE");	
  return 0;
}
