#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
      int y,x;
    float s,p;
    
    printf("Cuantos datos desea ingresar? ");
    scanf("%d",&x);
    y=1;
    s=0;
    int i[x];
    while(y<=x){
         scanf("%d",&i[y]);
         s=s+i[y];
         y=y+1;       
                }
    p=s/x;
    printf("El promedio es: %f\n",p);

    int z=1; 
    int a[x],b[x];  
    for(y=1;y<=x;y++){     
         if(i[y]>=p){
                 a[z]=i[y];
                 printf("A: %d\n",i[y]); 
                 }
         if(i[y]<p){
                 printf("B: %d\n",i[y]);   
                 b[z]=i[y];
                 }
         z=z+1;                                
                }
  system("PAUSE");	
  return 0;
}
