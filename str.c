#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"

int main(){
	char aviso[30];
	printf("Dame una cadena de maximo 28 caracteres");
	gets(aviso);
	printf("\nlongitud = %d caracteres\n",strlen(aviso));
	strcpy(aviso,"Como esta?");
	printf("%s",aviso);
	printf("\nlongitud = %d\n",strlen(aviso));
	system("Pause");
	return 0;
}
