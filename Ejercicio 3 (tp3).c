#include <stdio.h>
#include <stdlib.h>
void porcentajes (int H, int M, int CT);

int main() 
{
	int H=0, M=0, CT=0;
	
	printf("ingrese cantidad de curriculums de hombres:\n");
	scanf("%d",&H);
	
	printf("ingrese cantidad de curriculums de mujeres:\n");
	scanf("%d",&M);
	
	CT = H + M;
	
	porcentajes(H, M, CT);
	
	system("Pause");
	return 0;
}
void porcentajes (int h, int m, int CT)
{
	float Porcentajehombres=0, Porcentajemujeres=0;
	Porcentajehombres = (h*100.0)/CT;
	Porcentajemujeres = (m*100.0)/CT;
	
	printf("El porcentaje de hombres es: %.2f\n", Porcentajehombres);
	printf("el porcentaje de mujeres es: %.2f\n", Porcentajemujeres);
}
