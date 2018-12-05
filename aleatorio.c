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
		divi=1+rand()%30;
		xt=(25+rand()%30)/divi;
		yt=(25+rand()%30)/divi;
		zt=(25+rand()%20)/divi;
		
		fprintf(fp,"%f\t",xl[i]=xt);
		fprintf(fp,"%f\t",yl[i]=yt);
		fprintf(fp,"%f\n",zl[i]=zt);

	}
	fclose(fp);
}
	
	



void funcion_ale(){
	FILE *fp;
	fp=fopen("random.txt","w");
	int i;
	float var,var2,yva,zva;
	float x[9],y[9],z[9];
	srand(time(NULL));
	for(i=0;i<=9;i++){
		do{
		var2=rand();
		}while(var2>0&&var2<15);
		var=(1+rand()*((10+1)))/var2;
		yva=(1+rand()*((10+1)))/var2;
		zva=(1+rand()*((10+1)))/var2;
		fprintf(fp,"%f\t",x[i]=var);
		fprintf(fp,"%f\t",y[i]=yva);
		fprintf(fp,"%f\n",z[i]=zva);

	}
	fclose(fp);
}


//	float num,i;
//	srand(time(NULL));
//	for(i=0.0;i<=29;i++){
//		num=1+rand()%((10+1));
//		printf("\n%f",num);
//	}
	
