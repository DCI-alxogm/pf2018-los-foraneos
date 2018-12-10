///////librerias
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<time.h>

///////////////////

int rdtsc(){
		__asm__ __volatile__("rdtsc");} //funcion para generar puntos aleatorios
	
void funrr(int pun );
//////programa principal
//////////////////////
int main ()
{
///////	declaracion de variables
int u,i,j,k,n,m,c,pun;
float mx2[1000],my2[1000],mz2[1000],dd[10], nD,nR,Es,Els[i],nDR,DR[i],x2,y2,z2,s,so,sf;
float x,y,z,ro,rf,r;
FILE *rd;
FILE *le;
//////////////////////////////////////////////////////////
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
nD=1000000;

//////////////////////puntos aleatorios
  printf("Introduzca el número de puntos que desee generar\n");  
  scanf("%i", &pun);
  funrr(pun);
  nR=pun*pun;
  float matx[pun],maty[pun],matz[pun],rr[pun];
  le=fopen("ren.txt","r");
	for(i=0;i<pun;i++){ 
		fscanf(le,"%f\t %f\t %f\n",&x,&y,&z);
		  matx[i]=x;
		  maty[i]=y;
		  matz[i]=z;
			//printf("%i\t %f\t %f\t %f\n",i,matx[i],maty[i],matz[i]); 
}
 fclose(le);
 	k=1;
 	ro=0;
 	c=0;
for(rf=50;rf<500;rf=rf+50){//rango de 0 a 500 de 50 en 50
 for(i=0;i<pun;i++){
 	
 	for(j=k;j<pun;j++){

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
printf("dd=%i\t rr=%i\t nD=%f\t nR=%f\n",dd,rr,nD,nR);
/////////////////////// estimadoes eleccion 
    printf("Indica el tipo de estimador que deseas usar: \n");
    scanf("%i",&u);
	switch(u)
    {
    case 1:
    		for(i=0;i<10;i++){

				Es=((nR/nD)*(dd[i]/rr[i]))-1;  //estimador simple
				printf("%f\n",Es);
			
        break;

    case 2:
    	nDR=nR+nD;
    	for(i=0;i<10;i++){
			for(i=0;i<10;i++){
				Els[i]=0;
				for(i=0;i<10;i++){

					DR[i]=dd[i]+rr[i];
						Els[i]=((dd[i]/nD)-(2*DR[i]/nDR)+(rr[i]/nR))/(rr[i]/nR);//estimador Landy
								printf("%f\n",Els[i]);
}
}
			
}
}

        break;
        
    default:
		printf("\nsin seleccionar una opcion\n");    
    }
   return 0; 
}

/////funciones
////////////////////
void funrr(int pun){
	FILE *fp;
	fp=fopen("ren.txt","w");
	int i;
	float xt,divi,yt,zt;
	float xl[pun],yl[pun],zl[pun];
	srand(rdtsc());
	for(i=0;i<=pun;i++){
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
