#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int a, b;
	printf("indica tu año de nacimiento para saber si es mayor de edad: ");
	scanf("%i",&a);
	b=2016-a;
	if(b>=18){
		printf("Es mayor de edad \n");
	}
	else{
		printf("No es mayor de edad \n");
	}
	system("Pause");
	return 0;
}
