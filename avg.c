#include "stdio.h"
#include "stdlib.h"

int main(){
	float p , s , t , f;
	printf ("introduce la calificacion del primer parcial ");
	scanf ("%f" ,&p);
	printf ("introduce la calificacion del segundo parcial ");
	scanf ("%f" ,&s);
	printf ("introduce la calificacion del tercer parcial ");
	scanf ("%f" ,&t);
	f=(p+s+t)/3;
	printf("el resultado promedio de los tres parciales es : %f \n" , f);
	system("pause");
	
	return 0;
}
