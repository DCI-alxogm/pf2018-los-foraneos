//programa principal que le pide al usuario que ingrese uno de los dos estimadores 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int o;
	float Esi,ELS;
	printf("Elija el estimador\n");
	printf("(1)Estimador simple\n (2)Estimador Landy-Szalay");
	scanf("%i",&o);
	switch(o){
		case 1: 
			Esi=((nr/nd)(DD/RR))-1; //simple
			break;
		case 2: 
			ELS=((DD/nd)-(2*DR/Ndr)+(RR/nr)/(RR/nr));
			break;
		
		}
	return 0;
}

