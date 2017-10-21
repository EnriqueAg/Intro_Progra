#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int s=0;
  int mi=0;
  int hi=0;
  int c;
  printf("\nIngrese los segundos: ");
  scanf("%d",&s);
  
 mi=s/60;
 hi=mi/60;
 c=hi*60*60;
 
 printf("\n\nHoras: %d",hi);
 hi=hi*60;
 mi=mi-hi;
 printf("\nMinutos: %d",mi);
 
 c=c+(mi*60);
 s=s-c;
 
 printf("\nSegundos: %d",s);
 
  system("PAUSE");	
  return 0;
}
