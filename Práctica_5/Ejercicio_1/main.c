#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char cadena[100];
	char *palabra;

	printf("\nIngrese su cadena: ");
	gets(cadena);
	palabra=strtok(cadena,",.- ");
	printf("\n\nLas palabras son: \n");

    while (palabra != NULL){
      printf ("%s\n",palabra);
      palabra = strtok (NULL, ",.- ");
    }

  system("PAUSE");
}
