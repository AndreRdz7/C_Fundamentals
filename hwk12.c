#include "stdio.h"
#include "stdlib.h"
#include "math.h"


int main()
{
    int a,cont;
    cont=1;
    float c,calif,prom;
    calif=0.0;
    printf("Numero total de alumnos: ");
    scanf("%i",&a);
    while(cont<=a)
    {
        printf("Introduce la calificacion del alumno %i: ",cont);
        scanf("%f",&c);
        cont++;
        calif+=c;
        prom=(calif)/a;
    }
    printf ("El promedio  del grupo es: %f\n",prom);
    system ("pause");
    return 0;
}
