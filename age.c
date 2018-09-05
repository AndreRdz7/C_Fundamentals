#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int a, b, c, d, f;
	printf("Introduzca su año de nacimiento :");
	scanf("%i",&a);
	printf("Introduzca su mes de nacimiento :");
	scanf("%i",&b);
	printf("Introduzca su dia de nacimiento :");
	scanf("%i",&c);
	d=2016-a;
	f=2015-a;
	if(d<=0){
	printf("Edad invalida \n");
	}
	else{
		if(b<8){
			printf("Tienes la edad en años de %i \n",d);
		}
		else{
			if(c<=2){
				printf("Tienes la edad en años de %i \n",d);
			}
			else{
				printf("Tienes la edad en años de %i \n",f);
			}
		}
	}
	system("Pause");
	return 0;
}
