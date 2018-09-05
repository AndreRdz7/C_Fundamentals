#include "stdio.h"
#include "stdlib.h"
#include "math.h"
float resultado,resultado2;
float a (float x){
	float area;
	area=3.1416*x*x;
	return area;
}
float r (float area,float y){
	float resultado=area*y;
	return resultado;
}
float r2 (float x,float y){
	float resultado2=(2*x*3.1415)*y;
	return resultado2;
}
int main(){
	float x,y;
	printf("Dame el radio :");
	scanf("%f",&x);
	printf("Dame la altura :");
	scanf("%f",&y);
	float areal;
	float resultado;
	float area=a(x);
	resultado=r(area,y);
	resultado2=r2(x,y);
	printf("El volumen es %f y el area lateral es %f \n",resultado,resultado2);
	system("Pause");
	return 0;
}
