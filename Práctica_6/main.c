#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void imprimir(int *punt,int num);
void sumar(int *a1, int *a2,int *a3,int num);
void ordenar(int *aoriginal, int *anuevo, int num);
void pi(int *aoriginal, char *apoi, int num);

int main(){
	int A[5]={1,2,3,5,7};
	int *pA=&A[0];
	int B[5]={3,6,9,12,15};
	int *pB=&B[0];
	int C[5];
	int *pC=&C[0];
	char D[5];
	char *pD=&D[0];
	int opc,i;
	char opcc;
	int num=5;


	while(opc!=5){
		system("cls");
		printf("\nArreglo A: ");
		for (i=0;i<5;i++) printf("%d ",*(pA+i));
		printf("\nArreglo B: ");
		for (i=0;i<5;i++) printf("%d ",*(pB+i));
		printf("\n\n");
		printf("Opciones: \n\n");
		printf("1   Imprimir un arreglo\n");
		printf("2   Sumar los arreglos\n");
		printf("3   Ordenar un arreglo\n");
		printf("4   Par o impar de un arreglo\n");
		printf("5   Salir del programa\n");
		printf("\n");
		fflush(stdin);
		printf("Ingrese el numero: ");
		scanf("%d",&opc);
		switch (opc){
			case 1:
				printf("Desea imprimir el arreglo A o B?\n");
				fflush(stdin);
				scanf("%c",&opcc);
				if(opcc==65)
                    imprimir(pA,num);
				if(opcc==66)
				    imprimir(pB,num);
			break;
			case 2:
				sumar(pA,pB,pC,num);
				for (i=0;i<num;i++){
					printf("Suma :%d ",*(pC+i));
				}
			break;
			case 3:
				printf("Desea ordenar el arreglo A o B?\n");
				fflush(stdin);
				scanf("%c",&opcc);
				if(opcc==65)
                    ordenar(pA,pC,num);
				if(opcc==66)
				    ordenar(pB,pC,num);
				for (i=0;i<num;i++){
					printf("%d ",*(pC+i));
				}
			break;
			case 4:
				printf("Cual de los dos quiere comprobar como par o impar? A o B?\n");
				fflush(stdin);
				scanf("%c",&opcc);
				if(opcc==65)
                    pi(pA,pD,num);
				if(opcc==66)
				    pi(pB,pD,num);
				for (i=0;i<num;i++){
					printf("%c ",*(pD+i));
				}
			break;
			case 5:
				printf("Exit...\n");
			break;
			default:
				printf("Numero invalido\n");
		}
		system ("pause");
	}
}

void imprimir(int *punt,int num){
	int i;
	for (i=0;i<num;i++){
		printf("%d ",*(punt+i));
	}
}

void sumar(int *a1, int *a2,int *a3,int num){
	int i;
	for (i=0;i<num;i++){
		*(a3+i)=*(a1+i)+*(a2+i);
	}
}

void ordenar(int *aoriginal, int *anuevo, int num){
	int i;
	for (i=0;i<num;i++){
		*(anuevo+i)=*(aoriginal+(num-i-1));
	}
}

void pi(int *aoriginal, char *apoi, int num){
	int i;
	for (i=0;i<num;i++){
		if (*(aoriginal+i)%2==0)
            *(apoi+i) = 'P';
		if (*(aoriginal+i)%2!=0)
		    *(apoi+i) = 'I';
	}
}
