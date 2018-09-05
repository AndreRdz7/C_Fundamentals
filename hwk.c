#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int cont,n,m1,m2,m3;
	m1=10;
	m2=100;
	m3=1000;
	printf("Introduzca el numero que quiere ser el multiplicador x10, x100, x1000 ");
	scanf("%i", &n);
	for(cont=1;cont<=5;cont++){
		printf("%i %i %i \n",n*m1,n*m2,n*m3);
		m1+=10;
		m2+=100;
		m3+=1000;
	}
	system("Pause");
	return 0;
}
