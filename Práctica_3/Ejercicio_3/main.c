#include <stdio.h>
#include <stdlib.h>
int E[10][12]={{90, 90, 40, 60, 20, 80, 10, 10, 30, 70, 50, 25},{100, 80, 50, 10, 60, 40, 100, 40, 80, 70, 100, 56},{70, 90, 60, 20, 80, 50, 20, 60, 30, 70, 110, 60},{50, 60, 50, 30, 20, 80, 50, 40, 20, 70, 200, 70},{90, 90, 60, 40, 80, 70, 60, 40, 30, 50, 10, 40},{40, 10, 50, 40, 30, 90, 30, 80, 80, 60, 90, 86},{100, 40, 20, 50, 10, 100, 90, 80, 100, 70, 130, 120},{70, 10, 90, 70, 50, 30, 70, 60, 20, 50, 40, 89},{40, 30, 40, 70, 10, 100, 20, 20, 70, 20, 90, 66},{10, 60, 100, 50, 60, 40, 50, 100, 90, 20, 15, 30}};
int A[10];
int main(int argc, char *argv[])
{
  int x,y;
  printf("1: Sonora\t2: Aguascalientes\t3: Oaxaca\n4: Colima\t5: Chihuahua\t\t6: San Luis Potosi\n7: Durango\t8: Veracruz\t\t9: Yucatan\n10: Tabasco\n");
  for(y=0;y<=9;y++){
    A[y]=suma(y);
    printf("\n%d tuvo %d lluvias",y+1 ,A[y]);
  }
  menor();
  mayor();
  //Aguascalientes
  //Elegimos al mayor por default
  printf("\n\nMayor registro de lluvias en Aguascalientes: \n%d\n",E[1][0]);
  for(y=1;y<=11;y++){
    if(E[1][0]==E[1][y]){
        printf("%d\n",E[1][y]);
    }
  }
  system("PAUSE");
  return 0;
}

int suma(e){
 int y;
 int s=0;
 for(y=0;y<=11;y++){
    s=E[e][y]+s;
 }
 return s;
}

int mayor(){
 int x;
 for(x=1;x<=9;x++){
   if(A[0]<A[x]){
    A[0]=A[x];
   }
 }
 printf("\n\nMayor: %d",A[0]);
}

int menor(){
 int x;
 for(x=1;x<=9;x++){
   if(A[0]>A[x]){
    A[0]=A[x];
   }
 }
 printf("\n\nMenor: %d",A[0]);
}
