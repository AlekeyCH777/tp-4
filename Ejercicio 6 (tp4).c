#include <stdio.h>
#include <stdlib.h>

float la_octava_parte_del_numero(float num)
	
{
	float result=0;
	result=num/8;
	return result;
	
}
int main() 
{
	float num;
	
	printf("Ingrese un Numero: \n");
	scanf("%f",&num);
	
	
	printf("La octava parte de un numero es: %.2f\n",la_octava_parte_del_numero(num));
	
	
	system ("pause");
	return 0;
}
