#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int x,y,factorial;
	printf("Introduzca el numero que quiere volverlo factorial :");
	scanf("%i",&x);
	factorial=1;
	for(y=1;y<=x;y++){
		factorial=factorial*y;
	}
	printf("%i \n",factorial);
	system("Pause");
	return 0;
}
