#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  float x[5];
  int i;
  float s=0;
  for(i=1;i<=5;i++){
                    printf("Ingrese la calificacion %d: ",i);
                    scanf("%f",&x[i]);
                    s=x[i]+s;
                    if(x[i]<6){
                             printf("\tEl alumno REPROBO\n");
                             }
                    else{
                             printf("\tEl alumno APROBO\n");                         
                         }      
                    }
  float p=s/5;
  printf("El promedio es: %f",p);
                    
  system("PAUSE");	
  return 0;
}
