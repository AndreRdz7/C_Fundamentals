#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int a,c;
	a=0;
	c=0;
	while (c<=100){
		if(c%2!=0){
			printf("%i \n",c);
			a=a+1;
		}
		c=c+1;
	}
	printf("El total de impares es %i \n", a);
	system("Pause");
	return 0;
}
