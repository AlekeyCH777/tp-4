#include <stdio.h>
#include <stdlib.h>

int mayor_o_igual(int num1, int num2)
{
	int mayor_o_igual;
	if(num1==num2)
	{
		printf("Ambos numeros son iguales\n");

	}
	else
	{
		if(num1>num2)
		{
			printf("El primer numero es mayor y es: %d\n",num1);
			
		}
		else
		{
			printf("El segundo numero es mayor y es: %d\n",num2);
		}
		
	}
	return mayor_o_igual;
}

int main() 
{
	int num1,num2;
	
	printf("Ingrese un numero: \n");
	scanf("%d",&num1);
	
	printf("Ingrese otro numero: \n");
	scanf("%d",&num2);
	
	
	mayor_o_igual(num1,num2);
	
	system ("pause");
	return 0;
}
