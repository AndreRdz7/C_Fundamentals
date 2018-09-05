#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int MiFuncion(int arreglo[10],int num){
	int pos;
	pos=arreglo[num];
	return pos;
}

int main(){
	int numeros[10],x,j;
	printf("Dame 10 numeros :");
	for(j=1;j<=10;j++){
		scanf("%i",&numeros[j]);
	}
	x=MiFuncion(numeros,8);
	printf("%i de la posicion 8 \n",x);
	
	system("Pause");
	return 0;
}
