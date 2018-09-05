#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	char a;
	printf("Introduzca un caracter para determinar su sexo (f o m) ");
	scanf("%c",&a);
	if(a=='f' || a=='F'){
		printf("El sexo es femenino \n");
	}
	else{
		printf("El sexo es masculino \n");
	}
	system("Pause");
	return 0;
}
