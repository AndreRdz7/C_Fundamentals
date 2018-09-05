#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	float a, b;
	printf("introduzca el radio del circulo: ");
	scanf("%f",&a);
	if(a>=0){
		b=3.1416*a*a;
		printf("El area del circulo es %f \n",b);
	}
	else{
		printf("No se puede obtener el area con un numero negativo \n");
	}
	system("Pause");
	return 0;

}
