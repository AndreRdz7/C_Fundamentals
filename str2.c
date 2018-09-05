#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"

int main(){
	char nombre[41],apell[41],Name[81];
	printf("Dame tu(s) nombre(s) por favor :");
	gets(nombre);
	printf("Dame tu(s) apellido(s) por favor :");
	gets(apell);
	strcpy(Name, nombre);
	strcat(Name," ");
	strcat(Name,apell);
	printf("Buenos dias %s\n",Name);
	system("Pause");
	return 0;
}
