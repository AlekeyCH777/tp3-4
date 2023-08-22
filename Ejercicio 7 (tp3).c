#include <stdio.h>
#include <stdlib.h>

void suma  (int a, int b);
void mayor (int a, int b); 

int main() 
{
	int a=0, b=0;
	
	printf("ingrese valor de a:\n");
	scanf("%d",&a);
	
	printf("ingrese valor de b:\n");
	scanf("%d",&b);
	
	suma(a,b); 
	mayor(a,b);

}

void suma (int a, int b)
{
	int suma=0;
	suma= a+b;
	printf("el Valor de la suma es: %d\n",suma);
}

void mayor(int a, int b)
{
	if(a==b)
		printf("son iguales\n\n");
	else
	{
		if(a > b)
			printf("el mayor es: %d\n", a);
		else
			printf("el mayor es: %d\n", b);
	}
}
