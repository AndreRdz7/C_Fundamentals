#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"

int main(){
	char texto1[41],texto2[41];
	printf("Introduce contraseņa :");
	gets(texto1);
	printf("Confirma contraseņa :");
	gets(texto2);
	int comparacion = strcmp(texto1,texto2);
	if(comparacion==0)
		printf("Contraseņa correcta :D");
	else
		printf("La contraseņa no coincide");
	system("Pause");
	return 0;
}
