#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"

int main(){
	char nombre[81];
	printf("Por favor, escriba su nombre :");
	gets(nombre);
	printf("\nBuenos dias %s\n",nombre);
	system("Pause");
	return 0;
}
