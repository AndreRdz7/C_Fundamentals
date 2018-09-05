#include "stdio.h"
#include "stdlib.h"
#include "math.h"
float encontprom (int x, int y){
	float promedio;
	promedio=(x+y)/2.0;
	return promedio;
}
int main(){
	int x,y;
	printf("Dame el primer numero :");
	scanf("%i",&x);
	printf("Dame el segundo numero :");
	scanf("%i",&y);
	float resultado;
	resultado=encontprom(x,y);
	printf("El promedio es %.2f \n",resultado);
	system("Pause");
	return 0;
}
