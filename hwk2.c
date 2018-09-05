#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int fruta,pp=10,ps=15,pm=30,pu=25;
	int c1=0,c2=0,c3=0,c4=0,ct;
	int tp,ts,tm,tu,t;
	do{
		printf("Menu:\n");
		printf("1 Platanos 10$ kilo\n");
		printf("2 Sandia   15$ kilo\n");
		printf("3 Manzana  30$ kilo\n");
		printf("4 Uvas     25$ kilo\n");
		scanf("%i",&fruta);
		switch(fruta){
			case 1:
				printf("Haz comprado platano\n");
				c1++;
				break;
			case 2:
				printf("Haz comprado sandia\n");
				c3++;
				break;
			case 3:
				printf("Haz comprado manzanas\n");
				c3++;
				break;
			case 4:
				printf("Haz comprado uvas\n");
				c4++;
				break;
			default:
				printf("Opcion no valida \n");
				break;
		}
	}while(fruta!=-1);
	tp=c1*pp;
	ts=c2*ps;
	tm=c3*pm;
	tu=c4*pu;
	t=tp+ts+tm+tu;
	printf("El total a pagar es: %i pesos por comprar %i platanos por 10 pesos, %i sandias por 15 pesos, %i manzanas por 30 pesos, %i uvas por 25 pesos \n",t,c1,c2,c3,c4);
	system ("pause");
    return 0;
}
