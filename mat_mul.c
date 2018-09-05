#include <stdio.h>
int main(){
int m,n,f,co,i,j,k;
float A[100][100],B[100][100],C[100][100];
printf("Ingrese la fila de la primera matriz :");
scanf("%d",&m);
printf("Ingrese la columna de la primera matriz :");
scanf("%d",&n);
printf("Ingrese la fila de la segunda matriz :");
scanf("%d",&f);
printf("Ingrese la columna de la segunda matriz :");
scanf("%d",&co);
if (n==f){
printf("Ingresa los valores de la primera matriz :");
for (i=1;i<=m;i++){
 	for (j=1;j<=n;j++){
	printf("A(%d,%d)= ",i,j);
    scanf ("%f",&A[i][j]);
	}	
}
printf("Ingresa los valores de la segunda matriz :");
for (i=1;i<=f;i++){
   for (j=1;j<=co;j++)
    { printf("B(%d,%d)= ",i,j);
      scanf ("%f",&B[i][j]);
    }
}
for (i=1;i<=m;i++){
 	for (j=1;j<=co;j++){
	    C[i][j]=0;
    	for (k=1;k<=n;k++){
			C[i][j]=C[i][j]+A[i][k]*B[k][j];
        }
    }
}
printf("El producto matricial es :");
for (i=1;i<=m;i++)
    for (j=1;j<=co;j++){
	printf("C(%d,%d)=\t%4.2f\n",i,j,C[i][j]);
    }
}
else{
printf("Estas matrices no se pueden multiplicar debido a que el numero de columnas de la matriz A es diferente al numero de filas de la matriz B, !Vuelva a intentarlo!\n");
}

}
