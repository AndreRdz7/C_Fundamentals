#include <stdio.h>
int i,j;

void leeMatriz(int D[5][5]){
    printf("Dame los datos de la matriz:");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%i",&D[i][j]);
        }
    }
}

void suma(int A[5][5],int B[5][5],int C[5][5]){
    printf("La suma es \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            C[i][j]=A[i][j]+B[i][j];
            printf("%i \t",C[i][j]);
        }
        printf("\n");
    }
}

void resta(int A[5][5],int B[5][5],int C[5][5]){
    printf("La resta es \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            C[i][j]=A[i][j]-B[i][j];
            printf("%i \t",C[i][j]);
        }
        printf("\n");
    }
}
    

int main(){

    int A[5][5];
    int B[5][5];
    int C[5][5];
    leeMatriz(A);
	leeMatriz(B);
    suma(A,B,C);
    resta(A,B,C);
}
