#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
	float A[10],prom,pp;
	int j;
	printf("Dame las 10 calificaciones de los alumnos :");
	for(j=1;j<=10;j++){
		scanf("%f",&A[j]);
		pp+=A[j];
	}
	prom=pp/10;
	printf("El promedio es : %f ", prom);
	system("Pause");
	return 0;
}
