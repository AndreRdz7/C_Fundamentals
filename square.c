#include "stdio.h"
#include "stdlib.h"
#include "math.h"
int square(int y){
	return y*y;
}
int main(){
	int x,y;
	printf("Dame un numero :");
	scanf("%i",&y);
	x=square(y);
	printf("El cuadrado es %i \n",x);
	system("Pause");
	return 0;
}

