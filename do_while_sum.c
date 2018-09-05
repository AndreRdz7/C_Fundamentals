#include "stdio.h"
#include "stdlib.h"
#include "math.h"


int main(){
	int num,suma;
	do{
		printf("Dame un numero: ");
		scanf("%i",&num);
		suma+=num;
	}while(num!=0);
	printf("Resultado %i \n",suma);
	system ("pause");
    return 0;
}
