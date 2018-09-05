#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	double a,b,c,d;
	a=floor(7-4.5/2.0);
	b=ceil(3.0/4.0);
	c=round(pow(3.0,3)/4.0);
	d=a+b-c;
	printf ( "%f  \n", d);
	system("Pause");
	return 0;
}
