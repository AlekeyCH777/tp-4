#include <stdio.h>
#include <stdlib.h>

int mostrar_numero1( int a)
{
	return a;
}
int mostrar_numero2(int b)
{
	return b ;	
}
int main(int argc, char *argv[]) 
{
	int a,b;
	
	printf("Ingrese un numero\n");
	scanf("%d",&a);
	
	printf("Ingrese otro numero\n");
	scanf("%d",&b);
	
	mostrar_numero1(a);
	mostrar_numero2(b);
	
	printf("El primer numero es:%d\n",a);
	printf("El segundo numero es:%d\n",b);
	
	return 0;
}

