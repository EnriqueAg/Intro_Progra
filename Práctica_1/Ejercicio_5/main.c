#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char T;
  float n=0;
  
  printf("Ingrese la temperatura y la unidad");
  printf("\nEjemplo: 97C");
  printf("\nC en el caso de ser Celcius");
  printf("\nF en el caso de ser Farenheit");
  printf("\n\nTemperatura: ");
  scanf("%f %c",&n,&T);
  
  if(T=='C'){
             n=(1.8*n)+32;
             printf("El valor en Farenheit es: %f",n);
             }
             
  if(T=='F'){
             n=(5/9)*(n-32);
             printf("El valor en Celcius es: %f",n);
             }
  
  
  system("PAUSE");	
  return 0;
}
