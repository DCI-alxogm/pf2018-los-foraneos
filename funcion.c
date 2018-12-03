#include<stdio.h>
#include"funciones.h"

void funcion()
{

int xo,yo,zo;
FILE *Datos;

Datos=fopen("Datos.txt","r");
fscanf(Datos,"%f %f %f", &xo, &yo, &zo);
fclose(Datos);
printf("%f\n %f\n %f\n", xo, yo, zo);

return ;
}
