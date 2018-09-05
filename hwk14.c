#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
    int A[10],a,m=0;
    printf("Dame 10 numeros:");
    for (a=0;a<=9;a++)
    {
        scanf("%i",&A[a]);
    }
    for (a=0;a<=9;a++){
    	if (A[a]>m){
            m=A[a];
        }
    }
    printf("El numero mayor es %i\n",m);
    system("Pause");
	return 0;
}
