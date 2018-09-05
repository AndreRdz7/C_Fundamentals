#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h""
int main(){
	int a, b;
	char*r=" ";
	printf("Introduce tu anio de nacimiento: ");
	scanf("%i",&a);
	b=2016-a;
	if (b>=6 && b<12){
		r="Primaria";
	}
	else{
		if(b>=12 && b<15){
			r="Secundaria";
		}
			else{
				if(b>=15 && b<18){
					r="Preparatoria";
				}
					else{
						if(b>=18 && b<23){
							r="Universidad";
						}
							else{
								if(b<0){
									printf("Error, No esta en edad de estudiar \n");
								}
									else{
										printf("No has nacido \n" );
									}
								}
							}
						}
					}			
	if(r!=" "){
		printf("Tu nivel académico es %s",r);
	}
	system("Pause");
	return 0;
}
