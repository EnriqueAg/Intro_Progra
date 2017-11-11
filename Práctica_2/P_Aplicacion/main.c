#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //Sleep();

int main(int argc, char *argv[])
{
    float HR=0;
    printf("\nHumedad Relativa 55-80%");
    printf("\n\nHR sensada: ");
    scanf("%f",&HR);
    
    while(HR>=55 && HR<=80){
               Sleep(10000);
               printf("\nHR sensada: ");
               scanf("%f",&HR);
    }
    
    while(HR<55 || HR>80){
    if(HR<55){
          printf("Riego activado\n");
          HR=HR+(HR*4/100);
          Sleep(3000);//3 Segundos
          printf("Riego desactivado\n");
          printf("HR actual: %f\n",HR);  
             }
    if(HR>80){
          printf("\nVentilas abiertas");
          Sleep(5000);
          HR=HR-(HR*3/100);
          printf("\nVentilas cerradas");
          printf("\nHR actual: %f",HR);
              }
    }
    
  system("PAUSE");	
  return 0;
}
