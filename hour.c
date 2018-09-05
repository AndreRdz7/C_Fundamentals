#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int h,m,s;
	for(h=0;h<=22;h++){
		for(m=0;m<=58;m++){
			for(s=0;s<=58;s++){
				printf("%i h %i m %i s",h,m,s);
			}
		}
	}
	printf("%i h %i m %i s",h,m,s);
	system("Pause");
	return 0;
}
