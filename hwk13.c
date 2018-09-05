#include "stdio.h"
#include "stdlib.h"
#include "math.h"

float mayor(float x, float y, float z){
	float mayor;
	if(x>y && x>z){
		mayor=x;
		return x;
	}
	if(y>x && y>z){
		mayor=y;
		return y;
	}
	else{
		mayor=z;
		return z;
	}
	return (mayor);
}
int main(){
	float x,y,z,res;
	printf("Dame datos \n");
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	res=mayor(x,y,z);
	printf("%f ",res);
	system ("pause");
    return 0;
}
