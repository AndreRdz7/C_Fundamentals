#include <stdio.h>
int main (){ 
	int comparar=0; 
	int co,f,i,j; 
	printf("Ingrese el numero de columnas: "); 
	scanf("%d", &co);
	printf("Ingrese el numero de filas: "); 
	scanf("%d", &f); 
	int A[co][f]; 
	for(i=0;i<f;i++){ 
		for(j=0;j<co;j++){ 
			printf("Dame los datos de los valores de la matriz (%d,%d)= ",i,j); 
			scanf("%d", &A[i][j]);
		} 
	} 
	printf("Matriz original"); 
	for(i=0;i<f;i++){
		printf("\n"); 
		for(j=0;j<co;j++){ 
			printf(" %d ",A[i][j]); 
		} 
	} 
	printf("\nMatriz transpuesta"); 
	for(i=0;i<co;i++){ 
		printf("\n"); 
		for(j=0;j<f;j++){ 
			printf(" %d ", A[j][i]);
		}
	}
	for (i=0;i<f;i++) 
		for (j=0;j<co;j++){ 
			if (A[i][j]==A[j][i]) 
			comparar=1;
			else{
				comparar=0; 
				break; 
			}
		}
	if(comparar==1) 
		printf("\nEs una matriz ortogonal\n"); 
	if(comparar==0) 
		printf("\nNo es una matriz ortogonal\n"); 
	}
