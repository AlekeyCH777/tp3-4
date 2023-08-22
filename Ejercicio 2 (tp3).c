#include <stdio.h>
#include <stdlib.h>

void perimetro (int a, int b, int P);
void area(int a, int b, int A);

int main() 
{
	int a=0, b=0, A=0, P=0;
	
	printf("ingrese valor de a:\n");
	scanf("%d",&a);
	
	printf("ingrese valor de b:\n");
	scanf("%d",&b);
	
	area(a,b,A);
	perimetro(a,b,P);
	
}
void perimetro (int a, int b, int P)
{
	P=2*a+2*b;
	printf("El valor del perimetro es: %d\n",P);
}
void area(int a, int b, int A)	
{
	A=a*b;
	printf("el valor del area es: %d\n",A);
}
