#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"

int main(){
	char texto1[41],texto2[41];
	printf("Introduce contrase�a :");
	gets(texto1);
	printf("Confirma contrase�a :");
	gets(texto2);
	int comparacion = strcmp(texto1,texto2);
	if(comparacion==0)
		printf("Contrase�a correcta :D");
	else
		printf("La contrase�a no coincide");
	system("Pause");
	return 0;
}
