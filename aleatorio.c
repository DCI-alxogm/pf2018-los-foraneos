#include <stdio.h>
#include <stdio.h>
void funcion_ale();

int main(){
funcion_ale();
return 0;		
}

void funcion_ale(){
	FILE *fp;
	fp=fopen("random.txt","w");
	int i;
	float var;
	float x[9],y[9],z[9];
	srand(time(NULL));
	for(i=0;i<=9;i++){
		var=1+rand()%((10+1));
		printf("%f\t",x[i]=var);
		printf("%f\t",y[i]=var);
		printf("%f\n",z[i]=var);
	}
	fclose(fp);
}


//	float num,i;
//	srand(time(NULL));
//	for(i=0.0;i<=29;i++){
//		num=1+rand()%((10+1));
//		printf("\n%f",num);
//	}
	
