#include "stdio.h"
#include "stdlib.h"
#include "math.h"

float cuentas[5][3];
void llenaNip(float cuentas[5][3]){
	int i;
	for(i=0;i<5;i++){
		cuentas[i][1]=1234;
	}
}
void alta(float cuentas[5][3]){
	int cont=0;
	float NIP;
	double saldo;
	if(cont<5){
	printf("Dame tu nuevo NIP :");
	scanf("%f",&NIP);
	printf("Dame tu saldo :");
	scanf("%lf",&saldo);
	cuentas[cont][0]=cont;
	cuentas[cont][1]=NIP;
	cuentas[cont][2]=saldo;
	cont+=1;
	}
	else{
		printf("syntax error, no se admiten mas usuarios por el momento");
	}
}
void consulta(float cuentas[5][3]){
	float num;
	int i;
	int bandera=0;
	printf("Dame el numero de cuenta :");
	scanf("%f",&num);
	for (i=0;i<5;i++){
		if(num==i){
			printf("No. Cuenta %f\t", cuentas[i][0]);
			printf("NIP %f \t" ,cuentas[i][1]);
			printf("Saldo %lf \n", cuentas[i][2]);
			bandera=1;
		}
		if(bandera==2){
			printf("Cuenta no valida");
		}
	}
}
void consultaGeneral(float cuentas[5][3]){
	int j;
	for(j=1;j<5;j++){
		printf("No. Cuenta %f\t", cuentas[j][0]);
		printf("NIP %f \t" ,cuentas[j][1]);
		printf("Saldo %lf \n", cuentas[j][2]);
	}
}


void cambioNip(float cuentas[5][3]){
    int i;
    float nuevonip, num;
    printf("Dame el numero de cuenta: ");
    scanf("%f",&num);
    for(i=0;i<5;i++){
        if (num==i){
            printf("Dame el nuevo NIP ");
            scanf("%f", &nuevonip);
            cuentas [i][1] = nuevonip;
            printf("Tu nuevo nip es: %f \n",cuentas[i][1]);
        }
    }
}

void retiro(float cuentas[5][3]){
    int i;
    float num, retiro;
    printf("Dame el numero de cuenta: ");
    scanf("%f",&num);
    for(i=0;i<5;i++){
        if (num==i){
            printf("Dame la cantidad que quieres retirar: ");
            scanf("%f", &retiro);
            if(retiro <= cuentas[i][2]){
            cuentas[i][2] = cuentas[i][2] - retiro;
            printf("Tu saldo es de: %f \n",cuentas[i][2]);
            }
			else
                printf("No tienes suficiente dinero \n");
        }
    }
}


int main(){
	int opcion;
	do{
	printf("Bienvenido al Banco de Slim\n");
	llenaNip(cuentas);
	printf("Opciones\n1:Alta\n2:Consulta\n3:Consulta general\n4:Cambio NIP\n5:Retiro\nPorfis elige la opcion :");
	scanf("%i",&opcion);
	switch(opcion){
		case 1:
			alta(cuentas);
			break;
		case 2:
			consulta(cuentas);
			break;
		case 3:
			consultaGeneral(cuentas);
			break;
		case 4:
			cambioNip(cuentas);
			break;
		case 5:
			retiro(cuentas);
			break;
		case 6:
			printf("Adios guap@");
			break;
		default:
			printf("opcion no valida :v");
			break;
	}
	}while(opcion!=6);
}
