#include <stdio.h>
#include <stdlib.h>

int perimetro(int alt, int bas)
{
	int per=0;
	per=2*alt+2*bas;
	
	return per;
}

int area(int alt, int bas)
{
	
	int area=0;
	area=alt*bas;
	
	return area;
}

int main() 
{
	int alt,bas;
	printf("ingrese la altura: \n");
	scanf("%d",&alt);
	
	printf("ingrese la base: \n");
	scanf("%d",&bas);

	printf("El perimetro es :%d\n",perimetro(alt,bas));
	printf("El area es:%d\n",area (alt,bas));
	
	system ("pause");
	return 0;
}

