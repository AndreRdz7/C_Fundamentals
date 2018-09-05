#include "stdio.h"
#include "stdlib.h"
#include "math.h"
float abs (float x){
	float ab;
	if(x<0){
		ab=x*-1.0;
	}
	else{
		ab=x;
	}
	return ab;
}
int main(){
	float x;
	printf("Dame el numero :");
	scanf("%f",&x);
	float resultado;
	resultado=abs(x);
	printf("El resultado es %f \n",resultado);
	system("Pause");
	return 0;
}
