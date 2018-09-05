#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	float a,b,c,d,e,f,g,h,i,j;
	printf ("A continuacion, intruduzca 10 numeros para conocer cual es el mayor \n");
	printf ("Introduzca el primer numero :");
	scanf ("%f",&a);
	printf ("Introduzca el segundo numero :");
	scanf ("%f",&b);
	printf ("Introduzca el tercer numero :");
	scanf ("%f",&c);
	printf ("Introduzca el cuarto numero :");
	scanf ("%f",&d);
	printf ("Introduzca el quinto numero :");
	scanf ("%f",&e);
	printf ("Introduzca el sexto numero :");
	scanf ("%f",&f);
	printf ("Introduzca el septimo numero :");
	scanf ("%f",&g);
	printf ("Introduzca el octavo numero :");
	scanf ("%f",&h);
	printf ("Introduzca el noveno numero :");
	scanf ("%f",&i);
	printf ("Introduzca el decimo numero :");
	scanf ("%f",&j);
	if (a>b && a>c && a>d && a>e && a>e && a>f && a>g && a>h && a>i && a>j){
		printf("El numero mayor es %f \n",a);
	}
	if (b>a && b>c && b>d && b>e && b>e && b>f && b>g && b>h && b>i && b>j){
		printf("El numero mayor es %f \n",b);
	}
	if (c>b && c>a && c>d && c>e && c>e && c>f && c>g && c>h && c>i && c>j){
		printf("El numero mayor es %f \n",c);
	}
	if (d>b && d>c && d>a && d>e && d>e && d>f && d>g && d>h && d>i && d>j){
		printf("El numero mayor es %f \n",d);
	}
	if (e>b && e>c && e>d && e>a && e>e && e>f && e>g && e>h && e>i && e>j){
		printf("El numero mayor es %f \n",e);
	}
	if (f>b && f>c && f>d && f>e && f>e && f>a && f>g && f>h && f>i && f>j){
		printf("El numero mayor es %f \n",f);
	}
	if (g>b && g>c && g>d && g>e && g>e && g>f && g>a && g>h && g>i && g>j){
		printf("El numero mayor es %f \n",g);
	}
	if (h>b && h>c && h>d && h>e && h>e && h>f && h>g && h>a && h>i && h>j){
		printf("El numero mayor es %f \n",h);
	}
	if (i>b && i>c && i>d && i>e && i>e && i>f && i>g && i>h && i>a && i>j){
		printf("El numero mayor es %f \n",i);
	}
	if (j>b && j>c && j>d && j>e && j>e && j>f && j>g && j>h && j>i && j>a){
		printf("El numero mayor es %f \n",j);
	}
	system("Pause");
	return 0;

}
