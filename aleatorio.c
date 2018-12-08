#include <stdio.h>
#include <time.h> 
#include <stdlib.h>
void funcion_ale();
void funDD();
int rdtsc(){
		__asm__ __volatile__("rdtsc");
	}
int main(){
	funcion_ale();
	funDD();
return 0;		
}

void funDD(){
	FILE *fp;
	fp=fopen("DD.txt","w");
	int i;
	float xt,divi,yt,zt;
	float xl[9],yl[9],zl[9];
	srand(rdtsc());
	for(i=0;i<=9;i++){
	srand(rdtsc());
		divi=1+rand()%3;
		xt=(25+rand()%1000)/divi;
		yt=(25+rand()%1000)/divi;
		zt=(25+rand()%1000)/divi;
		
		fprintf(fp,"%f\t",xl[i]=xt);
		fprintf(fp,"%f\t",yl[i]=yt);
		fprintf(fp,"%f\n",zl[i]=zt);

	}
	fclose(fp);
}
	


void funcion_ale(){
	FILE *fp;
	fp=fopen("RR.txt","w");
	int i;
	float xt,divi,yt,zt;
	float xl[9],yl[9],zl[9];
	srand(rdtsc());
	for(i=0;i<=9;i++){
	srand(rdtsc());
		divi=1+rand()%30;
		xt=(25+rand()%40)/divi;
		yt=(25+rand()%40)/divi;
		zt=(25+rand()%20)/divi;
		
		fprintf(fp,"%f\t",xl[i]=xt);
		fprintf(fp,"%f\t",yl[i]=yt);
		fprintf(fp,"%f\n",zl[i]=zt);

	}
	fclose(fp);
}


//	float num,
//	srand(time(NULL));
//	for(i=0.0;i<=29;i++){
//		num=1+rand()%((10+1));
//		printf("\n%f",num);
//	}
	
