#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int BuscaNumero(int valores[], int tamanio, int busca){
	int i=0, posicion=-1;
	do{
  	if (valores[i]==busca)
   		posicion=i;
 	else
   		++i;
	}
	while(i<tamanio && posicion<0);
return posicion;
}

void MuestraArreglo(int valores[], int tamanio){
	int i=0;
	for (i=0; i<tamanio; ++i)
		printf("%d\t",valores[i]);
	printf("\n");
}

int main(){
	int x=0, numero=0, posicion=0;
	int ar_numeros[10] = {0};
	printf("Introduzca los 10 numeros enteros que se almacenaran en el arreglo\n");
	for (x=0; x<10; ++x){
		printf("Valor para el elemento [%d]: ", x);
		scanf("%d",&ar_numeros[x]);
	}
	printf("\n");

	printf("Introduzca el n�mero que desea buscar en el arreglo\n");
	scanf("%d",&numero);
	printf("\n");
	MuestraArreglo(ar_numeros,10);
	
	posicion=BuscaNumero(ar_numeros,10,numero);
	if (posicion != -1)
		printf("El n�mero %d est� en la posici�n %d del arreglo\n",numero, posicion);
	else
		printf("El n�mero %d no est� en el arreglo\n",numero);
	return 0;
}


