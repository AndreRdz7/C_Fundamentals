#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int cont=1;
    double pi=0.0;
    printf("Dame el numero con el que quieres calcular pi(mientras mas alto,mejor):");
    scanf("%i", &n);
    for(cont=1;cont<=n;cont++){
    pi+=6/pow(cont,2);
	}
    printf("La serie es %f\n",sqrt(pi));
    return 0;
}
