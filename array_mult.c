#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
	float num[5];
	float sum=0;
	int j;
	printf("Dame 5 numeros que se van a guardar en el arreglo [A]:");
	for(j=0;j<=4;j++){
		scanf("%f",&num[j]);
	}
	printf("multiplicados por 10 dan");
	for(j=0;j<=4;j++){
		printf(" %f ",num[j]*10);
	}
	system("Pause");
	return 0;
}
