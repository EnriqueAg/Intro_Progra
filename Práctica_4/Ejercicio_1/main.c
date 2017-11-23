#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a[3];
  int l[3];
  int h[3];
  int v[3];
  int x;
  int vt=0;
  for(x=0;x<=2;x++){
  printf("\n\nHabitacion %d\n",x+1);
  printf("Alto(m): "); scanf("%d",&h[x]);
  printf("Largo(m): "); scanf("%d",&l[x]);
  printf("Ancho(m): "); scanf("%d",&a[x]);
  v[x]=vol(a[x],l[x],h[x]);
  vt=v[x]+vt;
  printf("Volumen igual a: %d\n",v[x]);
  }
  printf("\n\nVolumen total: %d\n",vt);
  system("PAUSE");
  return 0;
}

int vol(a,l,h){
 int v;
 v=a*l*h;
 return v;
}
