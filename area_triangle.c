#include "stdio.h"
#include "stdlib.h"

int main(){
	float b, h, a;
	printf("introduce el valor de la base <cm>: ");
	scanf("%f", &b );
	printf("introduce el valor de la altura <cm>: ");
	scanf("%f", &h );
	a=b*h/2;
	printf("El resultado del Area es %f cm2 \n",a );
	system("Pause");
	
	return 0;
}
