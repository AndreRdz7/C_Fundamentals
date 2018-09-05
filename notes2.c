#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int a,b;
	char c;
	printf("Introduce tu calificación en la escala numérica (1-100) para obtener su equivalente en la escala americana de A-F :");
	scanf("%i", &a);
	b=(int)round(a/5);
	switch (b){
		case 20:
			c='A';
			break;
		case 18:
			c='B';
			break;
		case 15:
			c='C';
			break;
		case 12:
			c='D';
			break;
		case 9:
			c='E';
			break;
		default:
			c='F';
			break;
	}
	printf("Tu nota de %i es equivalente a %c \n",a,c);
	system("Pause");
	return 0;
}
