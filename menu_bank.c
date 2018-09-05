#include "stdio.h"
#include "stdlib.h"
#include "math.h"
int nip=1234;
float saldo=5000;

float donacion(int donar){
	printf("cuanto desea donar?");
	float dona;
	scanf("%f",&dona);
	if(dona<=saldo){
		saldo=saldo-dona;
	}
	else{
		printf("fondos insuficientes");
	}
	printf("gracias por tu caridad :3 \n");
	return saldo;
}
void consulta(){
	printf("Tu saldo es %f pesos \n",saldo);
}
float retiro(int sacar){
	printf("¿cuanto quieres retirar?");
	float retirar;
	scanf("%f",&retirar);
	if(retirar<=saldo){
		saldo=saldo-retirar;
	}
	else{
		printf("fondos insuficientes");
	}
	return saldo;
}
int validar(int nip){
	
	int nipuser;
	int cont=0;
	
	while (cont<3){
		printf("Dame tu nip xD :");
		scanf("%i",&nipuser);
		if(nipuser==nip)
			return 1;
		else
			cont++;
	}
	return 0;
}
void cambio(int nip){
	int nuevonip;
	printf("Introduce nuevo NIP :");
	scanf("%i",&nuevonip);
	nip=nuevonip;
	printf("Tu nip ha sido cambiado exitosamente :D \n");
}
int main(){
	int op;
	int res;
	printf("Bienvenido al Banco MidaRica \n");
	printf("Menu \n");
	res=validar(nip);
	
	
	if(res==0){
		printf("Tarjeta bloqueada :c \n");
	}
	else{
		do{
	
		printf("1: Cambio NIP, 2: Consulta saldo, 3:Retiro 4:Donacion 5:Salir \n");
		scanf("%i",&op);
		
		switch (op){
			case 1:
				cambio(nip);
				break;
			case 2:
				consulta();
				break;
			case 3:
				retiro(saldo);
				printf("Su saldo final es %f \n",saldo);
				break;
			case 4:
				donacion(saldo);
				printf("Su saldo final es %f \n",saldo);
				break;
			case 5:
				break;
			}
		
	}while(op!=5);
}
	printf("adios guapisim@ cliente, gracias por usar nuestro banco \n");
	system ("pause");
    return 0;
}
