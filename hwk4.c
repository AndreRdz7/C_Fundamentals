#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int n,cont;
	float pi;
	printf("Introduzca el numero que quiere para calcular pi(mientras mas alto, mejor) :");
	scanf("%i",&cont);
	n=1;
	while(n<=cont){
		pi=pi+pow((6/pow(n,2)),1/2);
		n++;
	}
	printf("%f \n", pi);
	system("Pause");
	return 0;
}
