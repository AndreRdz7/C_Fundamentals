#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int p,s;
	for(p=1;p<=10;p++){
		for(s=1;s<=10;s++){
			printf("%i x %i = %i \n",p,s,p*s);
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}
