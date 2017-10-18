#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char N[200];
  char A1[200];
  char A2[200];
  int h;
  int p;
  float ing;
  float im;
  float ingn;

  printf("Ingrese el nombre completo: ");
  scanf("%s",N);
  scanf("%s",A1);
  scanf("%s",A2);
  printf("Ingrese las horas trabajadas: ");
  scanf("%d",&h);
  printf("Ingrese el precio: ");
  scanf("%d",&p);
  
  printf("\n\n\n");
  
  printf("El nombre es: %s %s %s",N,A1,A2);
  ing=p*h;
  printf("\nEl ingreso es: %f",ing);
  im=0.25*ing;
  printf("\nEl impuesto es: %f",im);
  ingn=ing-im;
  printf("\nEl ingreso neto es: %f",ingn);
  
  system("PAUSE");	
  return 0;
}
