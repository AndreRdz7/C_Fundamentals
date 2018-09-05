#include "stdio.h"
#include "stdlib.h"
#include "math.h"


int main(){
	int clientes,opcion;
	float libreta,boligrafo,tijeras,plumones;
	float total1,total2,total3,total4;
	float totaltotal;
	float suma;
	libreta=0.0;
	boligrafo=0.0;
	tijeras=0.0;
	plumones=0.0;
	clientes=-1.0;
	do{
		printf("Bienvenido cliente\n");
		printf("Introduzca opcion, 1 libreta(25 pesos), 2 boligrafo(10 pesos), 3 tijeras(15 pesos), 4 plumones(22.5 pesos)");
		scanf("%i",&opcion);
		switch(opcion){
			case 1:
				libreta++;
				break;
			case 2:
				boligrafo++;
				break;
			case 3:
				tijeras++;
				break;
			case 4:
				plumones++;
				break;	
		}
		clientes++;
	}while(opcion!=5);
	total1=libreta*25.0;
	total2=boligrafo*10.0;
	total3=tijeras*15.0;
	total4=plumones*22.5;
	totaltotal=total1+total2+total3+total4;
	printf("Total libretas %.1f \n",libreta);
	printf("Total boligrafo %.1f \n",boligrafo);
	printf("Total tijeras %.1f \n",tijeras);
	printf("Total plumones %.1f \n",plumones);
	printf("El total a pagar por el cliente es: %.2f pesos; %.1f por %.1f libretas, %.2f por %.1f boligrafos, %.2f por %.1f tijeras, %.2f por %.1f plumones",totaltotal,total1,libreta,total2,boligrafo,total3,tijeras,total4,plumones);
	printf("Gracias por su compra \n");
	system ("pause");
    return 0;
}
