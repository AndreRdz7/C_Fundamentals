#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a,b;
	char c,d;
	printf("Introduzca su calificación en la escala numérica(1-100) para obtener su equivalente en la escala A-F :");
	scanf("%i",&a);
	b=(int)round(a/5);
	switch(b){
	
		case 20:
		case 19:
			c='A';
			break;
		case 18:
		case 17:
		case 16:
			c='B';
			break;
		case 15:
		case 14:
		case 13:
			c='C';
			break;
		case 12:
		case 11:
		case 10:
			c='D';
			break;
		case 0:
			c='F';
			break;
		default:
			c='E';
			break;
	}
	switch(b){
		case 20:
		case 18:
		case 15:
		case 12:
			d='+';
			break;
		case 19:
		case 16:
		case 13:
		case 10:
			d='-';
			break;
		default:
			d=' ';
			break;
	}
	printf("Tu calificacion %i es equivalente a %c%c en el sistema americano \n",a,c,d);
	system("Pause");
	return 0;
}
