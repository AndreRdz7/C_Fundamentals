#include "stdio.h"
#include "stdlib.h"
#include "math.h"


int main(){
	int clientes,opcion;
	int peinado;
	int corte;
	int suma;
	int totalcorte;
	int totalpeinado;
	int total;
	peinado=0;
	corte=0;
	clientes=-1;
	do{
		printf("Bienvenido cliente\n");
		printf("Introduzca opcion, 1 peinado(150 pesos) o 2 corte(100 pesos)");
		scanf("%i",&opcion);
		switch(opcion){
			case 1:
				peinado++;
				break;
			case 2:
				corte++;
				break;	
		}
		clientes++;
	}while(opcion!=0);
	totalpeinado=peinado*150;
	totalcorte=corte*100;
	total=totalpeinado+totalcorte;
	printf("Total peinados %i \n",peinado);
	printf("Total cortes %i \n",corte);
	printf("Total ingreso %i \n",total);
	printf("Total clientes %i \n",clientes);
	system ("pause");
    return 0;
}
