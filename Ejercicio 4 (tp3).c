#include <stdio.h>
#include <stdlib.h>

void C_presion(float A, float F, float P);

int main() {
	
	float A, P, F;
	
	printf("ingrese la fuerza aplicada es:");
	scanf("%f", &F);
	
	printf("ingrese el area de la superficie:");
	scanf("%f", &A);
	
	C_presion(A, P, F);
	
	return 0;
}
void C_presion(float A, float P, float F)
{
	P = F / A;
	printf("La presion sobre la superficie es: %f\n", P);
}
