#include <stdio.h>
#include <stdlib.h>

float hombres(int hm, float c, float porchm)
{
	
	porchm=(hm*100)/c;
	
	return porchm;
}

float mujeres(int mj, float c, float porcmj)
{
	
	porcmj=(mj*100)/c;
	return porcmj;
	
}

int main() 
{
	int hm,mj;
	float c=0,porchm=0,porcmj=0;
	printf("ingrese la cantidad de hombres que enviaron su curriculum: \n");
	scanf("%d",&hm);
	
	printf("ingrese la cantidad de mujeres que enviaron su curriculum: \n");
	scanf("%d",&mj);
	
	c=hm+mj;
	
	
	printf("El porcentaje de hombres que enviaron el curriculum son: %.2f\n",hombres(hm,c,porchm));
	printf("El porcentaje de mujeres que enviaron el curriculum son: %.2f\n",mujeres(mj,c,porcmj));
	
	
	system ("pause");
	return 0;
}
