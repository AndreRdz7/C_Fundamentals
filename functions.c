#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int i,ma,me;

void suma(int A[10], int B[10]){
	int C[10];
	for(i=0;i<=9;i++){
		C[i]=A[i]+B[i];
		printf("Suma %i \n",C[i]);
	}
}
int promedio(int A[10]){
	int suma=0;
	for(i=0;i<=9;i++)
		suma=suma+A[i];
	return suma/10;
}

int mayor(int A[10]){
	int m=0;
	for (i=0;i<=9;i++){
    	if (A[i]>m){
            m=A[i];
        }
    }
    return m;
}


int menor(int B[10]){
	int e=99999;
	for (i=0;i<=9;i++){
    	if (B[i]<e){
            e=B[i];
        }
    }
    return e;
}

int producto(int A[10], int B[10]){
	int C[10],pp;
	for(i=0;i<=9;i++){
		C[i]=A[i]*B[i];
		pp+=C[i];
		printf("Producto %i \n",pp);
	}
}


int main(){
	int A[10],B[10],C[10],m,e;
	int i,opcion,result;
	printf("Dame los datos del arreglo A[]");
	for(i=0;i<=9;i++){
		scanf("%i",&A[i]);	
	}
	printf("Dame los datos del arreglo B[]");
	for(i=0;i<=9;i++){
		scanf("%i",&B[i]);	
	}
	do{
		printf("Opciones...1:Suma arreglos;2:Promedio arreglo A;3:Mayor del arreglo A;4:Menor del arreglo b;5:Producto Punto; 6:Salir\n");
		scanf("%i",&opcion);
		switch(opcion){
			case 1:
				suma(A,B);
				break;
			case 2:
				result=promedio(A);
				printf("Este es el promedio %i \n",result);
				break;
			case 3:
				result=mayor(A);
				printf("Este es el numero mayor %i \n", result);
				break;
			case 4:
				result=menor(B);
				printf("Este es el numero menor %i \n", result);
			case 5:
				C[10]=producto(A,B);
				break;
			case 6:
				printf("Fin :9 \n");
				break;
			default:
				printf("opcion no valida :c \n");
				break;}
	}while(opcion!=6);
}

	

