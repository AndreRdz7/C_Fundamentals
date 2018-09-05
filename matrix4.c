#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int i,j,fil,col;

void leeMatriz(int X[fil][col]){
	printf("Dame los datos de matriz, porfis :D ");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			scanf("%i",&X[i][j]);
		}
	}
}

void suma(int A[fil][col],int B[fil][col], int C[fil][col]){
	printf("La suma es : \n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			C[i][j]=A[i][j]+B[i][j];
			printf("%i \t",C[i][j]);
		}
		printf("\n");
	}
}
int main(){
	
	printf("Dame numero de filas : ");
	scanf("%i",&fil);
	printf("Dame numero de filas : ");
	scanf("%i",&col);
	int A[fil][col];
	int B[fil][col];
	int C[fil][col];
	leeMatriz(A);
	leeMatriz(B);
	suma(A,B,C);/*
	resta(A,B,C);
	*/
}
