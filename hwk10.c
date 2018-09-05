#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int suma, cont, x,n;
	suma=0;
	cont=0;
	printf("Hasta que numero quieres hacer una progresion matematica de potencia? :");
	scanf("%i",&n);
	printf("Dale un valor a x, para la progresion :");
	scanf("%i",&x);
	while (cont<=n){
		suma+=pow(x,cont);
		cont++;
	}
	printf("Tu resultado es %i :",suma);
	system("Pause");
	return 0;
}
