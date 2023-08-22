#include <stdio.h>
#include <stdlib.h>
void impre (int a, int b)
{
	printf(" primer valor: %d\n\n segundo valor : %d\n\n",a,b);
}

int main() 
{
	int a=0, b=0;
	
	printf("ingrese valor de a:\n");
	scanf("%d",&a);
	
	printf("ingrese valor de b:\n");
	scanf("%d",&b);
	
	impre(a,b);

	return 0;
}

