#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int i,j,k,n,m,c;
float rf,sf,ro,so;
	float x,y,z,matx[10000],maty[10000],matz[10000],r,x2,y2,z2,s,mx2[1000],my2[1000],mz2[1000],rr[10],dd[10];//declaracion de variables con el tama;o de las matrices de acuerdo al numero de puntos
	float nD,nR,Es,Els[i],nDR,DR[i];
	FILE *le;
	le=fopen("corrmedia.txt","r");//se lee el primer rchivo con 10000 puntos
	for(i=0;i<10000;i++){ 
		fscanf(le,"%f\t %f\t %f\n",&x,&y,&z);
		  matx[i]=x;
		  maty[i]=y;
		  matz[i]=z;
			printf("%i\t %f\t %f\t %f\n",i,matx[i],maty[i],matz[i]); 
}
 fclose(le);
 	k=1;
 	ro=0;
 	c=0;
for(rf=50;rf<500;rf=rf+50){
 for(i=0;i<10000;i++){
 	
 	for(j=k;j<10000;j++){

	 r=sqrt((pow((matx[i]-matx[j]),2)+pow((maty[i]-maty[j]),2)+pow((matz[i]-matz[j]),2)));
	 //printf("%f\n",r);
	 if(r<rf && r>=ro){
	 	rr[c]++;
	 	printf("%f\n",rr[i]);
	 }
	// printf("%f\n",r);
}
	k++;
	c++;
}
ro=rf;
}
//printf("EL  numero total de pares es: %i\n",rr);
////////////////////////////////////////////
	FILE *rd;
	rd=fopen("corrsmall.txt","r");//lectura del archivo con 1000 puntos
	for(i=0;i<1000;i++){ 
		fscanf(rd,"%f\t %f\t %f\n",&x2,&y2,&z2);
		  mx2[i]=x2;
		  my2[i]=y2;
		  mz2[i]=z2;
		 
}
 fclose(rd);
 	m=1;
 	so=0;
 	c=0;
for(sf=50;sf<500;sf=sf+50){ //Avanza de rango en rango y analiza lo puntos de RR
 for(i=0;i<1000;i++){
 	
 	for(j=m;j<1000;j++){

	 s=sqrt((pow((mx2[i]-mx2[j]),2)+pow((my2[i]-my2[j]),2)+pow((mz2[i]-mz2[j]),2)));//calculo del radio
	 //printf("%f\n",s);
	 if(s<sf && s>=so){
	 	dd[c]++;
	 }
	// printf("%f\n",s);
}
	m++;
	c++;
}
so=sf;
}
printf("DD\n");
for(i=0;i<10;i++)
printf("%i\t %f\n",i,dd[i]);
printf("RR\n");
for(i=0;i<10;i++)
printf("%i\t %f\n",i,rr[i]);
/////////////////////////////////////////////
nD=100000000;
nR=1000000;
printf("dd=%i\t rr=%i\t nD=%f\t nR=%f\n",dd,rr,nD,nR);
for(i=0;i<10;i++){

Es=((nR/nD)*(dd[i]/rr[i]))-1;  //estimador simple
printf("%f\n",Es);
////////////
for(i=0;i<10;i++){
	Els[i]=0;
}
	nDR=101000000;
for(i=0;i<10;i++){

	DR[i]=dd[i]+rr[i];
Els[i]=((dd[i]/nD)-(2*DR[i]/nDR)+(rr[i]/nR))/(rr[i]/nR);//estimador Landy
			printf("%f\n",Els[i]);
}
}
	return 0;
}
