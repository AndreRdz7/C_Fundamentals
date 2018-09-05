#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int i,fila;
	char caracter='Z';
	for(fila=1;fila<=28;fila++){
		for(i=caracter;i>='A';i--){
			printf("%c",i);
		}
		caracter--;
		printf("\n");
	}
	system("Pause");
	return 0;
}
