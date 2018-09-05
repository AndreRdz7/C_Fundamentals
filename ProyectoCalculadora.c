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
		c=a/b;
		printf("Tu resultado es %f \n",c);
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
	int x,y,factorial;
	
	scanf("%i",&x);
	factorial=1;
	for(y=1;y<=x;y++){
		factorial=factorial*y;
	}
	printf("Tu resultado es %i \n",factorial);
}
void fibonacci(float a){
	int n;
    int cont=1;
    double pi=0.0;
    printf("Dame el numero con el que quieres calcular pi(mientras mas alto,mejor):");
    scanf("%i", &n);
    for(cont=1;cont<=n;cont++){
    pi+=6/pow(cont,2);
	}
    printf("La serie es %f\n",sqrt(pi));
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
void gradosaradianes(float a){
	printf("Introduzca el valor del angulo :");
	scanf("%f",&a);
	c=a/57.3;
	printf("Tu resultado es %f rad \n",c);
}
void radianesagrados(float a){
	printf("Introduzca el radian :");
	scanf("%f",&a);
	c=a*57.3;
	printf("Tu resultado es %f grados\n",c);
}
float velocidadcaidalibre(float a,float b){
	if(a<0 || b<0){
		printf("No puede haber valores negaivos");
	}
	else{
		c=a+(b*9.8);
	}
	printf("La velocidad final del objeto al caer es de %f metros sobre segundo \n",c);	
}
float velocidadinicial(float a,float b){
	if(a<0 || b<0){
		printf("No puede haber valores negaivos");
	}
	else{
		c=a*b+.5*9.8*pow(b,2);
	}
	printf("La altura que tenia el cuerpo era de %f metros \n",c);
}
void tiempotiro(float a, float b){
	printf("Introduzca la velocidad inicial :");
	scanf("%f",&a);
	printf("Introduce el angulo sin unidad :");
	scanf("%f", &b);
	c= sin(b*PI/180);
	if(a<0 || b<0){
		printf("No puede haber valores negaivos");
	}
	else{
		c2=2*a*c/9.8;
	}
	printf("El tiempo que dura el tiro parabolico es de %f segundos \n",c2);
}
void hmax(float a,float b){
	printf("Introduzca la velocidad inicial :");
	scanf("%f",&b);
	printf("Introduce el angulo sin unidad :");
	scanf("%lf", &a);
	c=seno(b);
	if(a<0 || b<0){
		printf("No puede haber valores negaivos");
	}
	else{
		c2=pow(b*c,2)/(9.8+0.5*b*c);
	}
	printf("La altura maxima que alcanza el tiro parabolico es de %f metros \n",c2);	
}
void xmax(float a,float b){
	printf("Introduzca la velocidad inicial :");
	scanf("%f",&b);
	printf("Introduce el angulo sin unidad :");
	scanf("%lf", &a);
	float s;
	s=sin(a*PI/180);
	printf("%f",s);
	c=cos(a*PI/180);
	printf("%f",c);
	if(a<0 || b<0){
		printf("No puede haber valores negaivos");
	}
	else{
		c2=(2*pow(b,2)*s*c)/9.8;
	}
	printf("La distancia maxima que alcanza el tiro parabolico es de %f metros \n",c2);
}
void pmatricial(){
	int m,n,f,co,i,j,k;
	float A[100][100],B[100][100],C[100][100];
	printf("Ingrese la fila de la primera matriz    :");
	scanf("%d",&m);
	printf("Ingrese la columna de la primera matriz :");
	scanf("%d",&n);
	printf("Ingrese la fila de la segunda matriz    :");
	scanf("%d",&f);
	printf("Ingrese la columna de la segunda matriz :");
	scanf("%d",&co);
	if (n==f){
		printf("Dame los datos de los valores de la primera matriz :\n");
		for (i=1;i<=m;i++){
 			for (j=1;j<=n;j++){
			printf("A(%d,%d)= ",i,j);
    		scanf ("%f",&A[i][j]);
			}	
		}
	printf("Dame los datos de los valores de la segunda matriz :\n");
	for (i=1;i<=f;i++){
		for (j=1;j<=co;j++){
			printf("B(%d,%d)= ",i,j);
			scanf ("%f",&B[i][j]);
    	}
	}
	for (i=1;i<=m;i++){
 		for (j=1;j<=co;j++){
	    	C[i][j]=0;
    		for (k=1;k<=n;k++){
				C[i][j]=C[i][j]+A[i][k]*B[k][j];
        	}
    	}
	}
	printf("El producto matricial es :\n");
	for (i=1;i<=m;i++)
    	for (j=1;j<=co;j++){
			printf("C(%d,%d)=\t%4.2f\n",i,j,C[i][j]);
    	}
	}
	else{
	printf("Estas matrices no se pueden multiplicar debido a que el numero de columnas de la matriz A es diferente al numero de filas de la matriz B, !Vuelva a intentarlo!\n");
	}	
}
int identidad(){
	int f,co;
	int i=0,j=0;
	int comparar=0;
	printf("Ingrese el numero de filas: ");
	scanf("%i", &f);
	printf("Ingrese el numero de columnas: ");
	scanf("%i", &co);
	int A[f][co];
	for(i=0;i<f;i++){
        for(j=0;j<co;j++){
            printf("Dame los datos de los valores de la matriz (%d,%d)= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for (i=0;i<f;i++){
        for(j=0; j<co; j++)
            printf(" %d ",A[i][j]);
        printf("\n");
    }
    for (i=0; i<1; i++){
        for(j=0; j<co; j++){
            if (A[i][i]==1 && A[i][j]==0){
            	comparar=1;
            }
            else{
                comparar=0;
            }
        }
        if(comparar==1){
            printf("Es una matriz identidad \n");
    	}
    	else{
    		printf("No es una matriz identidad \n");
		}
    }
}
int transpuesta(){
	int A[100][100],co,f,i,j;
	printf("Ingrese el numero de columnas :");
	scanf("%d", &co);
	printf("Ingrese el numero de filas :");
	scanf("%d", &f);
	for(i=0;i<f;i++){
		for(j=0;j<co;j++){
        	printf("Dame los datos de los valores de la matriz (%d,%d)= ", i+1, j+1);
        	scanf("%d", &A[i][j]);
   		}
	}
	printf("Matriz original");
	for(i=0;i<f;i++){
    	printf("\n");
    	for(j = 0;j < co;j++){
        	printf(" %6d ", A[i][j]);
    	}
	}
	printf("\nMatriz transpuesta");
	for(i = 0;i < co;i++){
    	printf("\n");
    	for(j = 0;j < f;j++){
        	printf(" %6d ", A[j][i]);
        }
	}
	printf("\n");
}
int ortogonal(){
	int comparar=0; 
	int co,f,i,j; 
	printf("Ingrese el numero de columnas: "); 
	scanf("%d", &co);
	printf("Ingrese el numero de filas: "); 
	scanf("%d", &f); 
	int A[co][f]; 
	for(i=0;i<f;i++){ 
		for(j=0;j<co;j++){ 
			printf("Dame los datos de los valores de la matriz (%d,%d)= ",i,j); 
			scanf("%d", &A[i][j]);
		} 
	} 
	printf("Matriz original"); 
	for(i=0;i<f;i++){
		printf("\n"); 
		for(j=0;j<co;j++){ 
			printf(" %d ",A[i][j]); 
		} 
	} 
	printf("\nMatriz transpuesta"); 
	for(i=0;i<co;i++){ 
		printf("\n"); 
		for(j=0;j<f;j++){ 
			printf(" %d ", A[j][i]);
		}
	}
	for (i=0;i<f;i++) 
		for (j=0;j<co;j++){ 
			if (A[i][j]==A[j][i]) 
			comparar=1;
			else{
				comparar=0; 
				break; 
			}
		}
	if(comparar==1) 
		printf("\nEs una matriz ortogonal\n"); 
	if(comparar==0) 
		printf("\nNo es una matriz ortogonal\n"); 
	}
int escalar(){
	int f,co;
	int i,j;
	int comparar=0;
	printf("Ingrese el numero de filas: ");
	scanf("%i", &f);
	printf("Ingrese el numero de columnas: ");
	scanf("%i", &co);
	int A[f][co];
	for(i=0;i<f;i++){
        for(j=0;j<co;j++){
            printf("Dame los datos de los valores de la matriz (%d,%d)= ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    for (i=0;i<f;i++){
        for(j=0; j<co; j++)
            printf(" %d ",A[i][j]);
        printf("\n");
    }
    for (i=0; i<1; i++){
        for(j=0; j<co; j++){
            if (A[j][j]=A[i][j]){
            	comparar=1;
            }
            else{
                comparar=0;   
            }
        }
        if(comparar==1){
            printf("No una matriz escalar \n");
    	}
    	else{
    		printf("Es una matriz escalar \n");
		}
    }
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
	printf("Introduzca '2001' si desea obtener el producto matricial \n");
	printf("Introduzca '2002' si desea saber si es una matriz identidad \n");
	printf("Introduzca '2003' si desea obtener la matriz transpuesta \n");
	printf("Introduzca '2004' si desea saber si su matriz es ortogonal \n");
	printf("Introduzca '2005' si desea saber si su matriz es escalar \n");
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
			factorial(a);
			break;
		case 8:
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
			gradosaradianes(a);
			break;	
		case 111:
			radianesagrados(a);
			break;
		case 1001:
			printf("Introduzca la velocidad inicial :");
			scanf("%f",&a);
			printf("Introduzca el tiempo que tarda en caer :");
			scanf("%f",&b );
			velocidadcaidalibre(a,b);
			break;
		case 1002:
			velocidadinicial(a,b);
			break;
		case 1003:
			tiempotiro(a,b);
			break;
		case 1004:
			hmax(a,b);
			break;
		case 1005:
			xmax(a,b);
			break;
		case 2001:
			pmatricial();
			break;
		case 2002:
			identidad();
			break;
		case 2003:
			transpuesta();
			break;
		case 2004:
			ortogonal();
			break;
		case 2005:
			escalar();
		}
	switch(o){
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
			printf("Tu resultado es %f \n",c);
			break;		
	}
	}while(o>=1 && o<=8 || o>=101 && o<=111 || o>=1001 && o<=1005 || o>=2001 && o<=2005);
	printf("Gracias por usar esta calculadora suprema :D\n");
	return 0;
}
