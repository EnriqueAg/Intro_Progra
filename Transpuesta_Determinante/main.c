#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

//Matriz A
   int i,j;
   float A[3][3]={{1, 2, 3},{6, 0, 3},{0,2,1}};
   printf("A=\n"); 
   for(i=0;i<=2;i++){
                     for(j=0;j<=2;j++){
                     printf("%f   ",A[i][j]);
                                       }
      printf("\n")  ;                               
      
                     } 
  
//Transpuesta de A
   float At[3][3];
   printf("At=\n"); 
   for(i=0;i<=2;i++){
                     for(j=0;j<=2;j++){
                     At[j][i]=A[i][j];
                     printf("%f      ",A[j][i]);
                                       }
      printf("\n")  ;                               
                     }
                     
//Determinante de A
 float d0=(A[0][0])*((A[1][1])*(A[2][2])-(A[1][2])*(A[2][1]));
 printf("\n%f",d0);
 
 float d1=(A[1][0])*((A[0][1])*(A[2][2])-(A[0][2])*(A[2][1]));
 printf("\n%f",d1);
 
 float d2=(A[2][0])*((A[0][1])*(A[1][2])-(A[0][2])*(A[1][1]));
 printf("\n%f",d2);
 
 float dt=d0-d1+d2;
 printf("\n\nDeterminante es: %f",dt);
  
  system("PAUSE");	
  return 0;
}
