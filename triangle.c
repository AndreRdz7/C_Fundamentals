#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int f,c,nf,nc;
	printf("base: ");
	scanf("%i",&nf);
	for(f=1;f<=nf;f++){
		for(c=1;c<=f;c++){
			printf("*");
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}
