#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int a;
	printf("Introduzca un numero para verificar que esta dentro del rango :");
	scanf("%i",&a);
	if (a>=0 && a<=10)
	printf("El numero %i esta dentro del rango \n",a);
	else
	printf("El numero %i NO esta dentro del rango \n",a);
	system("Pause");
	return 0;
}
