#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "windows.h"

int main(){
	int h,m,s,x;
	x=1000;
	for(h=0;h<24;h++){
		for(m=0;s<60;m++){
			for(s=1;s<60;s++){
				printf("%02i:%02i:%02i",h,m,s);
				Sleep(x);
			}
		}
		
	}
	system("Pause");
	return 0;
}
