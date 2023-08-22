#include <stdio.h>
#include <stdlib.h>

void resistencias (int r1, int r2, int r3, int r4, int r5);

int main(int argc, char *argv[]) {
	
	int r1=0, r2=0, r3=0, r4=0, r5=0;
	
	printf("ingrese resistencia 1:\n");
	scanf("%d", &r1);
	printf("ingrese resistencia 2:\n");
	scanf("%d", &r2);
	printf("ingrese resistencia 3:\n");
	scanf("%d", &r3);
	printf("ingrese resistencia 4:\n");
	scanf("%d", &r4);
	printf("ingrese resistencia 5:\n");
	scanf("%d", &r5);
	
	resistencias(r1, r2, r3, r4, r5);
	return 0;
}
void resistencias(int r1, int r2, int r3, int r4, int r5)
{
	int RT;
	RT=r1+r2+r3+r4+r5;
	printf("\nprimera resistencia ingresada es: %d\n", r1);
	printf("segunda resistencia ingresada es: %d\n", r2);
	printf("tercera resistencia ingresada es: %d\n", r3);
	printf("cuarta resistencia ingresada es: %d\n", r4);
	printf("quinta resistencia ingresada es: %d\n", r5);
	printf("Y la cantidad de resistencia total en serie es: %d\n", RT);
}

