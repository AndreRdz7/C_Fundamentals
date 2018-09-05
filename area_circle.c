#include "stdio.h"
#include "stdlib.h"

int main(){
	float r, a;
	printf ("introduce el radio del círculo en cm :");
	scanf ("%f", &r );
	a=3.1416*r*r;
	printf ("el area del circulo es : %f cm2 \n",a );
	system("Pause");
	
	return 0;
}

