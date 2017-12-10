#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <windows.h>
#define PORT1 0x3F8

int main()
{
	int l;
	while(1==1){
	 outportb(PORT1 + 0 , 0x06);
	 outportb(PORT1 + 1 , 0x00);
	 outportb(PORT1 + 3 , 0x03);
	 outportb(PORT1 + 2 , 0xC7);
	 outportb(PORT1 + 4 , 0x0B);
	 l = inportb(PORT1 + 5);
	 if(l<=500){
	 	printf("Abriendo cortinas");
	 	Sleep(3000);
	 }
	 else
		printf("Cerrando cortinas");
	 	Sleep(3000);
}
    return 0;
}
