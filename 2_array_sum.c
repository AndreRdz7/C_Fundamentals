#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
	float A[5],B[5],C[5];
	int j;
	printf("Dame 5 numeros que se van a guardar en el arreglo [A]:");
	for(j=0;j<=4;j++){
		scanf("%f",&A[j]);
	}
	printf("Dame 5 numeros que se van a guardar en el arreglo [B]:");
	for(j=0;j<=4;j++){
		scanf("%f",&B[j]);
	}
	printf("La suma de los arreglos en su casilla correspondiente es :");
	for(j=0;j<=4;j++){
		C[j]=A[j]+B[j];
	}
	for(j=0;j<=4;j++){
		printf("%f",C[j]);
	}
	
	system("Pause");
	return 0;
}
