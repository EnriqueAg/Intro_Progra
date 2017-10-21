#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float ft=0;
  float in, yd, cm, m;
  printf("\n\nIngrese la medida en pies: ");
  scanf("%f",&ft);
  
  in=ft*12;
  yd=ft*(0.3333333);
  cm=ft*2.54;
  m=ft*0.0254;
  
  printf("\nEl valor en pulgadas es: %f",in);
  printf("\nEl valor en yardas es: %f",yd);
  printf("\nEl valor en centimetros es: %f",cm);
  printf("\nEl valor en metros es: %f",m);    
  
  system("PAUSE");	
  return 0;
}
