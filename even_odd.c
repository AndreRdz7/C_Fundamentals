#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int a, b;
	printf("Introduzca el numero para saber si es par o impar: ");
	scanf("%i",&a);
	b=a%2;
	if (b==0){
		printf("El numero es par \n");
	}
	else{
		printf("El numero es impar \n");
	}
	system("Pause");
	return 0;
}
