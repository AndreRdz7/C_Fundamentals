#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int cont;
	float n,su;
	float suma;
	suma=0;
	cont=1;
	su=1;
	printf("Hasta que numero quieres hacer una progresion matematica para calcular pi? (mientras más alto es más preciso) :");
	scanf("%f",&n);
	
	while (cont<=n){
		if(cont%2==0){
			suma-=4/su;
		}
		else{
			suma+=4/su;
		}
		su+=2;
		cont++;
	}
	printf("Tu resultado es %f :",suma);
	system("Pause");
	return 0;
}
