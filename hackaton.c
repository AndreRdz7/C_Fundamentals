#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int b,p,cont,mul,n;
	printf("introduzca la base :");
	scanf("%i",&b);
	printf("introduzca la potencia :");
	scanf("%i",&p);
	cont=1;
	mul=1;
	while(cont<=p){
		mul=mul*b;
		cont++;
	}
	printf("resultado : %i", mul);
	system("Pause");
	return 0;
}
