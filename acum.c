#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int a,c;
	a=0;
	c=1;
	while (c<=10){
		a=a+c;
		printf("%i \n",a);
		c=c+1;
	}
	system("Pause");
	return 0;

}
