#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int o;
	int a,b,c;
	printf("Para sumar oprima '1', para restar oprima '2', para multiplicar oprima '3', para dividir oprima '4', para salir oprima '5': ");
	scanf("%i",&o);
	while (o<=4 && o>=1){
	
		switch (o){
			case 1:
				printf("Introduzca el primer numero :");
				scanf("%i",&a);
				printf("Introduzca el segundo numero :");
				scanf("%i",&b);
				c=a+b;
				printf("La respuesta es %i \n",c);
				break;
			
			case 2:
				printf("Introduzca el primer numero :");
				scanf("%i",&a);
				printf("Introduzca el segundo numero :");
				scanf("%i",&b);
				c=a-b;
				printf("La respuesta es %i \n",c);

				break;
				
			case 3:
				printf("Introduzca el primer numero :");
				scanf("%i",&a);
				printf("Introduzca el segundo numero :");
				scanf("%i",&b);
				c=a*b;
				printf("La respuesta es %i \n",c);
			
				break;
				
			case 4:
				printf("Introduzca el primer numero :");
				scanf("%i",&a);
				printf("Introduzca el segundo numero :");
				scanf("%i",&b);
				c=a/b;
				printf("La respuesta es %i \n",c);

				break;
		}
		printf("Para sumar oprima '1', para restar oprima '2', para multiplicar oprima '3', para dividir oprima '4', para salir oprima '5': ");
		scanf("%i",&o);
	}
	printf("Adios");
	system("Pause");
	return 0;
}
