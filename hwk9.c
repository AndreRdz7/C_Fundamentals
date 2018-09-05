#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	int v;
	float vp1,vp2,vp3,vp4,vt,p1,p2,p3,p4;
	printf("candidato #1 oprima '1', Candidato #2 oprima '2', candidato #3 oprima '3', candidato #4 oprima '4', para resultados oprima '0': ");
	scanf("%i",&v);
	while (v<=4 && v>=1){
	
		switch (v){
			case 1:
				vp1++;
				break;
			case 2:
				vp2++;
				break;			
			case 3:
				vp3++;
				break;
			case 4:
				vp4++;
				break;
		}
		printf("candidato #1 oprima '1', Candidato #2 oprima '2', candidato #3 oprima '3', candidato #4 oprima '4', para resultados oprima '0': ");
		scanf("%i",&v);
	}
	vt=vp1+vp2+vp3+vp4;
	p1=(vp1/vt)*100;
	p2=(vp2/vt)*100;
	p3=(vp3/vt)*100;
	p4=(vp4/vt)*100;
	printf("El porcentaje del candidato #1 con %f votos es de %f \n",vp1,p1);
	printf("El porcentaje del candidato #2 con %f votos es de %f \n",vp2,p2);
	printf("El porcentaje del candidato #3 con %f votos es de %f \n",vp3,p3);
	printf("El porcentaje del candidato #4 con %f votos es de %f \n",vp4,p4);
	system("Pause");
	return 0;
}

