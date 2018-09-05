#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "stdbool.h"

int main()
{
	printf("Tama�o %d \n", sizeof(int));
	char a;
	bool proceder;
	printf("Deseas proceder? (y/n) ");
	scanf("%c", &a);
	if (a == 'y')
		proceder = true;
	else
		proceder = false;

	int b, c;
	unsigned int d, e;
	printf("Indica el primer numero: ");
	scanf("%d", &b);
	printf("Indica el primer numero: ");
	scanf("%d", &c);
	printf("Indica el primer numero: ");
	scanf("%d", &d);
	printf("Indica el primer numero: ");
	scanf("%d", &e);
	int x = b + c;
	unsigned int y = d + e;
	printf("El resultado de la suma con int es %d \n", x);
	printf("El resultado de la suma con uint es %d \n", y);
	system("Pause");
	return 0;
}
