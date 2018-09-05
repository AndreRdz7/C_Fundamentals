#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int min,sus=2,n,a;
	float r;
	printf("Introduzca el numero al que quiere llegar en la serie :");
	scanf("%i",&a);
	n=1;
	min=1;
	while(min<=a){
		r+=min/pow(2,n);
		min++;
		n++;
	}
	printf("%f \n",r);
	system("Pause");
	return 0;
}
