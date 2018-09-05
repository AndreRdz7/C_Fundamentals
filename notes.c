#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a;
	printf("Introduce tu calificación (0-100) para determinarlo en la escala americana de A-F :");
	scanf("%i",&a);
	float b=a/5.0;
	char c='f';
	if(b>=19.0 && b<=20.0){
		c='A';
	}
	else{
		if(b<19.0 && b>=16.0){
			c='B';
		}
		else{
			if(b<16.0 && b>=13.0){
				c='C';
			}
			else{
				if(b<13.0 && b>=10.0){
					c='D';
				}
				else{
					if(b<10 && b>=1){
						c='E';
					}
					else{
						c='F';
					}
				}
			}
		}
	}
	printf("Tu nota %i es igual a %c \n",a,c);
	system("Pause");
	return 0;
}
