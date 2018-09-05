#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "windows.h"

int main(){
	int i,j,k;
	for(i=1;i<=9;i++){
		for(j=1;j<=8;j++){
			printf("\t");
			printf("*");
			for(k=6;k>1;k--){
				printf("*");
			}
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}

