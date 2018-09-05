#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
	int j,i,fil,col;
	printf("Dame numero de filas : ");
	scanf("%i",&fil);
	printf("Dame numero de filas : ");
	scanf("%i",&col);
	int A[fil][col];
	int B[fil][col];
	int C[fil][col];
	printf("Dame los datos de A");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			scanf("%i",&A[i][j]);
		}
	}
	printf("Dame los datos de B");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			scanf("%i",&B[i][j]);
		}
	}
	printf("La suma es : \n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			C[i][j]=A[i][j]+B[i][j];
			printf("%i \t",C[i][j]);
		}
		printf("\n");
	}
	
}
