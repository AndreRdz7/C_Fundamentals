#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	float a,c;
	a=0;
	c=2;
	while (c<=50){
		a=a+1/c;
		printf("%f \n",a);
		c=c+1;
	}
	system("Pause");
	return 0;

}
