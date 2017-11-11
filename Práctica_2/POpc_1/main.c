#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int uno, dos, tres;
  printf("Ingrese el primer dato: ");
  scanf("%d",&uno);
  printf("Ingrese el segundo dato: ");
  scanf("%d",&dos);
  printf("Ingrese el tercer dato: ");
  scanf("%d",&tres);
  
  if(uno>dos && uno>tres){
             printf("El mayor es: %d",uno);
             }
  if(dos>uno && dos>tres){
             printf("El mayor es: %d",dos);
             }
  if(tres>uno && tres>dos){
             printf("El mayor es: %d",tres);
             }
  if(uno==dos && uno>tres){
             printf("El mayor es: %d y %d",uno,dos); 
              }
  if(uno==tres && uno>dos){
             printf("El mayor es: %d y %d",uno,tres); 
              }
  if(dos==tres && dos>uno){
             printf("El mayor es: %d y %d",dos,tres); 
              }
   if(uno==dos && uno==tres){
             printf("Los 3 son iguales");         
        }              
    
  system("PAUSE");	
  return 0;
}
