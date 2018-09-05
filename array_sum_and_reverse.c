#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
	float num[10];
	float sum=0;
	int j;
	printf("Dame 10 numeros :");
	for(j=0;j<=9;j++){
		scanf("%f",&num[j]);
		sum+=num[j];
	}
	printf("La suma es %f :D y los numeros escritos al reves :4" ,sum);
	for(j=9;j>=0;j--)
		printf("%f ",num[j]);
	system("Pause");
	return 0;
}
