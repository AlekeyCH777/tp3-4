#include <stdio.h>
#include <stdlib.h>

void valor (float entero);

int main()
	{
		float entero=0;
		printf("ingrese el valor del que desea obtener su octava parte\n");
		scanf("%f", &entero);
		
		valor(entero);
		return 0;
	}
	void valor(float entero)
	{
		float octava_parte=0;
		octava_parte = entero/8;
		
		printf("la octava parte de su entero es: %.2f\n", octava_parte);
	}
