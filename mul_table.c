#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int i,n,r;
	printf ("Introduce la tabla que desees :");
	scanf ("%i",&i);
	n=1;
	while (n<=10){
		r=i*n;
		printf("%i x %i = %i \n",i,n,r);
		n=n+1;
	}
	system("Pause");
	return 0;

}
