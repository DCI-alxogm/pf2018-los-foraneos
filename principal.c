#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int op=1,o,nR,nD,DD,RR,nDR,DR;
	float Es, Els;
	
while(op==1){
	printf("Qué estimador desea usar?\n");
	printf("Presione (1) para el estimador simple\n");
	printf("Presione (2) para el estimador Landy-Szalay\n");

	scanf("%i", &o);
	
	switch(o){
		case 1:
			printf("Seleccionaste el estimador simple\n");
			
			 Es=((nR/nD)*(DD/RR))-1;
			 
			 break;
			
		case 2:
			printf("Seleccionaste el estimador Landy-Szalay\n");
			
			Els=((DD/nD)-(2*DR/nDR)+(RR/nR))/(RR/nR);
			
			break;
	}
}

	return 0;
}
