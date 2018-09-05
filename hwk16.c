#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
	int A[10],c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
	int j;
	printf("Dame las 20 calificaciones de los alumnos :");
	for(j=1;j<=20;j++){	
		scanf("%i",&A[j]);
	}
	if (A[j]<=10){		
			if(A[j]==0)
				c0++;
			if(A[j]==1)
				c1++;
			if(A[j]==2)
				c2++;
			if(A[j]==3)
				c3++;	
			if(A[j]==4)
				c4++;
			if(A[j]==5)
				c5++;
			if(A[j]==6)
				c6++;
			if(A[j]==7)
				c7++;
			if(A[j]==8)
				c8++;
			if(A[j]==9)
				c9++;
			if(A[j]==10)
				c10++;	
		}
	else
	printf("Numero no valido :c \n");
	}
	printf("La cantidad de alumnos que sacaron 0 es : %i \n",c0);
	printf("La cantidad de alumnos que sacaron 1 es : %i \n",c1);
	printf("La cantidad de alumnos que sacaron 2 es : %i \n",c2);
	printf("La cantidad de alumnos que sacaron 3 es : %i \n",c3);
	printf("La cantidad de alumnos que sacaron 4 es : %i \n",c4);
	printf("La cantidad de alumnos que sacaron 5 es : %i \n",c5);
	printf("La cantidad de alumnos que sacaron 6 es : %i \n",c6);
	printf("La cantidad de alumnos que sacaron 7 es : %i \n",c7);
	printf("La cantidad de alumnos que sacaron 8 es : %i \n",c8);
	printf("La cantidad de alumnos que sacaron 9 es : %i \n",c9);
	printf("La cantidad de alumnos que sacaron 10 es : %i \n",c10);
	system("Pause");
	return 0;
}
