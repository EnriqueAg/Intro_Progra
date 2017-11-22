#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[])
{
  int A[10][10];
  int B[10];
  int s=0;
  int x,y,i,j,k;

  for(x=1;x<=10;x++){
    for(y=1;y<=10;y++){
        A[x][y]=rand()%11;
        printf("%d   ",A[x][y]);
    }
    printf("\n");
  }
 s=0;
  for(i=1;i<=10;i++){
    for(j=1;j<=10;j++){
        for(k=1;k<=10;k++){
            if(A[j][k]==i){
                s=s+1;
            }
        }
    }
    B[i]=s-1;
    printf("%d se repite %d veces \n",i ,B[i]);
    s=0;
  }

  system("PAUSE");
  return 0;
}
