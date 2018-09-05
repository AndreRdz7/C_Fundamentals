#include "stdio.h"
#include "stdlib.h"
#include "math.h"


int main(){
	int opcion;
	do{
		printf("Menu:\n");
		printf("1 Imprime Mensaje\n");
		printf("2 Salir\n");
		scanf("%i",&opcion);
		switch(opcion){
			case 1:
				printf("Hola mundo\n");
				break;
			case 2:
				printf("Adios vaquero\n");
				break;
			default:
				printf("Opcion invalida\n");
		}
	}while(opcion!=2);
	system ("pause");
    return 0;
}
