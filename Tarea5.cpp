//Tarea 5 Avendaño Garibay Ruben Omar 614
#include <stdio.h>

int main()
{
	int estatura;		//Estatura
	int estaturaMin;	//Estatura Minima
	int estFaltante;	//Estatura Faltante para entrar

	estaturaMin = 90;
	printf("Digite su estatura en centimetros:");	//Estatura del usuario expresada en CM
	scanf_s("%d", &estatura);

	estFaltante = estaturaMin - estatura;		//Estatura faltante para alcanzar los 90cm
	if (estatura >= estaturaMin) {		//Si se cumple con la estatura minima
		printf("Adelante, pase");
	}
	else if (estatura < estaturaMin) {		//Si no se cumple con la estatura minima
		printf("Lo sentimos, a usted le faltan: %i cm", estFaltante);
	}
	return 0;
}
