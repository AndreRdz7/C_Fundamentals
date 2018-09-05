#include "stdio.h"
#include "stdlib.h"

int main(){
	char carac;
	carac=' ';
	printf("Introduzca la letra correcta :");
	while (carac != 'A'){
		scanf("%c",&carac);
	}
	system("Pause");	
	return 0;
}
