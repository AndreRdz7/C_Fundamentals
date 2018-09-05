#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	float i,n,r;
	printf ("Hasta donde quiere imprimir?");
	scanf ("%f",&i);
	n=1;
	while (n<=i){
		r=1.0+1/n;
		n=n+1.0;
		printf("%f \n",r);
		
	}
	system("Pause");
	return 0;

}
