#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
int i,j,k,n,rr,dd,m;
	float x,y,z,matx[10],maty[10],matz[10],r,x2,y2,z2,s,mx2[10],my2[10],mz2[10];
	float nD,nR,Es;
	FILE *le;
	le=fopen("RR.txt","r");
	for(i=0;i<10;i++){ 
		fscanf(le,"%f\t %f\t %f\n",&x,&y,&z);
		  matx[i]=x;
		  maty[i]=y;
		  matz[i]=z;
		  printf("%f\t %f\t %f\n",x,y,z);
}
 fclose(le);
 	k=1;
 	rr=0;
 for(i=0;i<10;i++){
 	
 	for(j=k;j<10;j++){

	 r=sqrt((pow((matx[i]-matx[j]),2)+pow((maty[i]-maty[j]),2)+pow((matz[i]-matz[j]),2)));
	 
	 if(r<=1.5){
	 	rr++;
	 }
	 printf("%f\n",r);
}
	k++;
}
printf("EL  numero total de pares es: %i\n",rr);
////////////////////////////////////////////
	FILE *rd;
	rd=fopen("DD.txt","r");
	for(i=0;i<10;i++){ 
		fscanf(rd,"%f\t %f\t %f\n",&x2,&y2,&z2);
		  mx2[i]=x2;
		  my2[i]=y2;
		  mz2[i]=z2;
		  printf("%f\t %f\t %f\n",x2,y2,z2);
}
 fclose(rd);
 	m=1;
 	dd=0;
 for(i=0;i<10;i++){
 	
 	for(j=m;j<10;j++){

	 s=sqrt((pow((mx2[i]-mx2[j]),2)+pow((my2[i]-my2[j]),2)+pow((mz2[i]-mz2[j]),2)));
	 
	 if(s<=1.5){
	 	dd++;
	 }
	 printf("%f\n",s);
}
	m++;
}
printf("EL  numero total de pares es: %i\n",dd);
/////////////////////////////////////////////
nD=100;
nR=100;
printf("dd=%i\t rr=%i\t nD=%f\t nR=%f\n",dd,rr,nD,nR);
Es=((nR/nD)*(dd/rr))-1;
printf("%f",Es);
	
	return 0;
}
