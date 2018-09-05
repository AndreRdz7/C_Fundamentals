#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define PI 3.14159265
float c,c2;
int o,o2;
double result,result2;
float suma(float a,float b){
	return a+b;
}
float resta(float a,float b){
	return a-b;
}
float multiplicacion(float a,float b){
	return a*b;
}
float division(float a,float b){
	if(b!=0){
		return a/b;
	}
	else{
		printf("Syntax error \n");
	}
}
float potencia(float a,float b){
	c=pow(a,b);
	return c;
}
float raiz(float a,float b){
	c=pow(a,1/(b+0.0));
	return c;
}
void factorial(float a){
	float c;
	float cont=1;
	while(cont<=a){
		c=c+(c*cont);
		cont++;
	}
	printf("El factorial es %f\n",c);
}
void fibonacci(float a){
	int cont;
	c=1;
	for(cont=0;cont<=a;cont++){
		c=c+6/pow(cont,2);
	}
	printf("El fibonacci es %f\n",sqrt(c));
	
}
double seno(double a){
	c=sin(a*PI/180);
	return c;
}
double coseno(double a){
	c=cos(a*PI/180);
	return c;
}
double tangente(double a){
	c=tan(a*PI/180);
	return c;
}
double cotangente(double a){
	c=1/tan(a*PI/180);
	if(a<=0){
		printf("Entrada no valida \n");
	}
	else{
		printf("Resultado es: %lf \n",c);	
	}
}
double secante(double a){
	if(a<89 && a>91){
		printf("Entrada no valida, intente nuevamente \n");
	}
	else{
		c=1/cos(a*PI/180);
		printf("Resultado es: %lf \n",c);
	}
	return c;
}
double cosecante(double a){
	if(a<1){
		printf("Entrada no valida, intente nuevamente \n");
	}
	else{
		c=1/sin(a*PI/180);
		printf("Resultado es: %lf \n",c);
	}
	return c;
}
double senoinverso(double a){
	c=asin(a);
	c2=(180*c)/M_PI;
	if(a<-1 || a>1){
		printf("Entrada no valida, intente nuevamente \n");
	}
	else{
		printf("El seno inverso es %f grados \n",c2);
	}
}
double cosenoinverso(double a){
	c=acos(a);
	c2=(180*c)/M_PI;
	if(a<-1 || a>1){
		printf("Entrada no valida, intente nuevamente \n");
	}
	else{
		printf("El coseno inverso es %f grados \n",c2);
	}
}
double tangenteinverso(double a){
	c=atan(a);
	c2=(180*c)/M_PI;
	printf("La tangente inversa es %f grados \n",c2);
}
float gradosaradianes(float a){
	c=a*PI/180;
	return c;
}
float radianesagrados(float a){
	return c=a*180/PI;
}
float velocidadcaidalibre(float a,float b){
	if(a<0 || b<0){
		printf("No puede haber valores negaivos");
	}
	else{
		c=a+(b*9.8);
	}
	return c;
}
float velocidadinicial(float a,float b){
	if(a<0 || b<0){
		printf("No puede haber valores negaivos");
	}
	else{
		c=a*b+.5*9.8*pow(b,2);
	}
	return c;
}
float tiempotiro(float a, float b){
	c= sin(b*PI/180);//sin //cos //tan
	if(a<0 || b<0){
		printf("No puede haber valores negaivos");
	}
	else{
		c2=2*a*c/9.8;
	}
	return c2;
}
float hmax(float a,float b){
	c= sin(b*PI/180);//sin //cos //tan
	if(a<0 || b<0){
		printf("No puede haber valores negaivos");
	}
	else{
		c2=pow(a,2)*c/(2*9.8);
	}
	return c2;	
}
float xmax(float a,float b){
	double resultado,result;
	result= sin(b*PI/180);//sin //cos //tan
	resultado= cos(b*PI/180);//sin //cos //tan
	if(a<0 || b<0){
		printf("No puede haber valores negaivos");
	}
	else{
		c=2*pow(a,2)*result*resultado/9.8;
	}
	return c;
}

int pmatricial(){
	
}

int identidad(){
	
}

int transpuesta(){
	
}

int ortogonal(){
	
}

int escalar(){
	
}

int main(){
	int o;
	float a,b,c;
	printf("####################################### \n## Bienvenidos a la Calculadora 3000 ##\n#######################################\n##### Podras realizar operaciones #####\n#######################################\n" );
	printf("#Autores: David Andre Rodriguez Mendez#\n");
	printf("###############A01730716###############\n");
	printf("########Cesar Isaac Ayala Corro########\n");
	printf("###############A01730757###############\n");	
	printf("#######################################\n");
	printf("Introduzca '1' si quiere sumar\nIntroduzca '2' si quiere restar\nIntroduzca '3' si quiere multiplicar\nIntroduzca '4' si quiere dividir\nIntroduzca '5' si quiere elevar a una potencia\nIntroduzca '6' si quiere sacar una raiz\nIntroduzca '7' si quiere un factorial\nIntroduzca '8' si quiere fibonacci\n");
	printf("Introduzca '101' si quiere obtener el seno de un angulo\nIntroduzca '102' si quiere obtener el coseno de un angulo\nIntroduzca '103' si quiere obtener la tangente de un angulo\nIntroduzca '104' si quiere obtener la cotangente de un angulo\nIntroduzca '105' si quiere obtener la secante de un angulo\nIntroduzca '106' si quiere obtener la cosecante de un angulo\n");
	printf("Introduzca '107' si quiere obtener el seno opuesto de un numero\nIntroduzca '108' si quiere obtener el coseno inverso de un numero\nIntroduzca '109' si quiere obtener la tangente inversa de un numero\n");
	printf("Introduzca '110' si quiere convertir de grados a radianes\nIntroduzca '111' si quiere convertir de radianes a grados\n");
	printf("Introduzca '1001' si desea obtener la velocidad en caida libre \n");
	printf("Introduzca '1002' si desea obtener la aaltura en caida libre \n");
	printf("Introduzca '1003' si desea obtener el tiempo en tiro parabolico \n");
	printf("Introduzca '1004' si desea obtener la altra en tiro parabolico \n");
	printf("Introduzca '1005' si desea obtener el alcance en tiro parabolico \n");
	printf("Introduzca cualquier otro nmumero para salir\n");
	do{
	printf("Dame tu opcion :");
	scanf("%i",&o);
	switch(o){
		case 1:
			printf("Ahora introduzca los numeros \n");
			printf("Introduzca el primer sumando : ");
			scanf("%f",&a);
			printf("Introduzca el segundo sumando :");
			scanf("%f",&b );
			c=suma(a,b);
			break;
		case 2:
			printf("Ahora introduzca los numeros \n");
			printf("Introduzca el minuendo : ");
			scanf("%f",&a);
			printf("Introduzca el sustraendo : ");
			scanf("%f",&b );
			c=resta(a,b);
			break;
		case 3:
			printf("Ahora introduzca los numeros \n");
			printf("Introduzca el primer multiplicando : ");
			scanf("%f",&a);
			printf("Introduzca el segundo multiplicando :");				
			scanf("%f",&b );
			c=multiplicacion(a,b);
			break;
		case 4:
			printf("Ahora introduzca los numeros \n");
			printf("Introduzca el dividendo : ");
			scanf("%f",&a);
			printf("Introduzca el divisor :");
			scanf("%f",&b );
			c=division(a,b);
			break;
		case 5:	
			printf("Ahora introduzca los numeros \n");
			printf("Introduzca la base : ");
			scanf("%f",&a);
			printf("Introduzca la potencia :");
			scanf("%f",&b );
			c=potencia(a,b);
			break;
		case 6:
			printf("Ahora introduzca los numeros \n");
			printf("Introduzca el radicando : ");
			scanf("%f",&a);
			printf("Introduzca el Indice :");
			scanf("%f",&b );
			c=raiz(a,b);
			break;
		case 7:
		
			printf("Introduzca el número que quiere encontrar su factorial :");
			scanf("%f",&a);
			factorial(a);
			break;
		case 8:
			printf("Hasta que numero quieres hacer una progresion matematica? :");
			scanf("%i",&a);
			fibonacci(a);
			break;
		case 101:
			double a, c,param;
			printf("Introduce el angulo sin unidad :");
			scanf("%lf", &a);
			c=seno(a);
			printf("Resultado es: %lf \n",c);
			break;
		case 102:
		
			printf("Introduce el angulo sin unidad :");
			scanf("%lf", &a);
			c=coseno(a);
			printf("Resultado es: %lf \n",c);
			break;	
		case 103:
			printf("introduce un numero:");
			scanf("%lf", &a);
			c=tangente(a);
			printf("Resultado es: %lf \n",c);
			break;	
		case 104:
			printf("Introduce el angulo sin unidad: ");
			scanf("%lf", &a);
			c=cotangente(a);
			break;
		case 105:
			printf("Introduce el angulo sin unidades: ");
			scanf("%lf", &a);
			secante(a);
			break;	
		case 106:
			printf("introduce un numero:");
			scanf("%lf",&a);
			cosecante(a);
			break;	
		case 107:
			printf("Introduce el numero :");
			scanf("%lf",&a);
			double c2;
			senoinverso(a);
			break;	
		case 108:
			printf("Introduce el numero :");
			scanf("%lf", &a);
			c=cosenoinverso(a);
			break;
		case 109:
			printf("Introduce el numero :");
			scanf("%lf", &a);
			c=tangenteinverso(a);
			break;
		case 110:
			printf("Introduzca el valor del angulo :");
			scanf("%f",&a);
			c=gradosaradianes(a);
			break;	
		case 111:
			printf("Introduzca el radian :");
			scanf("%f",&a);
			c=radianesagrados(a);
			break;
		case 1001:
			printf("Introduzca la velocidad inicial :");
			scanf("%f",&a);
			printf("Introduzca el tiempo que tarda en caer :");
			scanf("%f",&b );
			c=velocidadcaidalibre(a,b);
			break;
		case 1002:
			printf("Introduzca la velocidad inicial :");
			scanf("%f",&a);
			printf("Introduzca el tiempo que tarda en caer :");
			scanf("%f",&b );
			c=velocidadinicial(a,b);
			break;
		case 1003:
			printf("Introduzca la velocidad inicial :");
			scanf("%f",&a);
			printf("Introduce el angulo sin unidad :");
			scanf("%f", &b);
			c=tiempotiro(a,b);
			break;
		case 1004:
			printf("Introduzca la velocidad inicial :");
			scanf("%f",&a);
			printf("Introduce el angulo sin unidad :");
			scanf("%lf", &b);
			c=hmax(a,b);
			break;
		case 1005:
			printf("Introduzca la velocidad inicial :");
			scanf("%f",&a);
			printf("Introduce el angulo sin unidad :");
			scanf("%lf", &b);
			c=xmax(a,b);
			break;/*
		case 2001:
			int m,n,f,co,i,j,k;
			printf("")
			break;/*
		case 2002:
			int t,i,j;
			printf("De que tamaño quieres tu matriz cuadrada? :");
			scanf("%i",&t);
			int A[i][j];
			for(i=0;i<=t;i++)
				for(j=0;j<=t;j++){
					if (i==j){
						printf("Es identidad :D");
					} 
				}
			break;
		case 2003:
			
			break;
		case 2004:
			break;
		case 2005:
			break;*/
		}
	switch(o){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			printf("Tu resultado es %f \n",c);
			break;	
		case 110:
			printf("Tu resultado es %f rad \n",c);
			break;	
		case 111:
			printf("Tu resultado es %f grados\n",c);
			break;	
		case 1001:
			printf("La velocidad final del objeto al caer es de %f metros sobre segundo \n",c);	
			break;
		case 1002:
			printf("La altura que tenia el cuerpo era de %f metros \n",c);
			break;
		case 1003:
			printf("El tiempo que dura el tiro parabolico es de %f segundos \n",c);
			break;	
		case 1004:
			printf("La altura maxima que alcanza el tiro parabolico es de %f metros \n",c);
			break;	
		case 1005:
			printf("La distancia maxima que alcanza el tiro parabolico es de %f metros \n",c);
			break;
		}
	}while(o>=1 && o<=8 || o>=101 && o<=111 || o>=1001 && o<=1005 || o>=2001 && o<=2005);
	printf("Gracias por usar esta calculadora suprema :D\n");
	return 0;
}
