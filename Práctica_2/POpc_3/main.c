#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x,y,m;
  printf("Tablas de multiplicar:\n\n");
  for(x=1;x<=9;x++){
     
     for(y=1;y<=10;y++){
           m=x*y;             
           printf("%d x %d = %d\n",x ,y ,m);
           }
     printf("\n\n");
  }
  
  system("PAUSE");	
  return 0;
}
