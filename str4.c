#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h" 
char M[10]="A01730716";

int main(){
	char M2[10];
	int i;
	
	for(i=1;i<=3;i++){
		printf("Introduce matricula :");
		gets(M2);
		int comp=strcmp(M,M2);
		if (comp==0){
			printf("Matricula correcta\n");
			printf("Bienvenido al Tec\n");
			break;
		}
		else{
			printf("Matricula incorrecta chavo, vuelve a intentar\n");
		}
		
	}
	if (i==4){
		printf("Fuera intruso\n");
	}
	system("Pause");
	return 0;
}
