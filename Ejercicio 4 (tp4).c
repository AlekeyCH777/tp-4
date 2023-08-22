#include <stdio.h>
#include <stdlib.h>

float perimetro(float fuer,float sup)
{
	float pres=0;
	pres=fuer/sup;
	return pres;
	
}
int main() 
{
	float fuer,sup;
	printf("Ingrese la fuerza de la superfice: \n");
	scanf("%f",&fuer);
	
	printf("Ingrese la superficie: \n");
	scanf("%f",&sup);
	
	
	printf("La presion de la superficie es: %.2f\n",perimetro(fuer,sup));
	system ("pause");
	return 0;
}
