#include <stdio.h>
#include <stdlib.h>
  int x[10];
int main(int argc, char *argv[])
{
  int i;
  for(i=1;i<=10;i++){
    printf("Ingrese el valor %d: ",i);
    scanf("%d",&x[i]);
  }
  mayor(1);
  for(i=2;i<=9;i++){
    mayor(i);
    menor(i);
  }
  menor(10);

  for(i=1;i<=10;i++){
    printf("%d\t",x[i]);
  }
  system("PAUSE");
  return 0;
}

int mayor(m){
 int i;
 for(i=m+1;i<=10;i++){
    if(x[m]==x[i]){
        x[i]=0;
    }
 }
}
int menor(m){
 int i;
 for(i=m-1;i>=0;i--){
    if(x[m]==x[i]){
        x[i]=0;
    }
 }
}
