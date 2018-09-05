#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	float a, b, c;
	printf ("indica el primer numero :");
	scanf ("%f",&a);
	printf ("indica el segundo numero :");
	scanf ("%f",&b);
	if(b==0){
		printf("no se puede realizar la operacion \n" );
		}
	else{
			c=(a+0.00)/b;
			printf("el resultado de la division es %f \n",c);
		}
	system("Pause");
	return 0;
}

