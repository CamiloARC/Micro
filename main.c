#include <stdio.h>
#include <calculadora.h>

int main(void)
{
	int operacion,PrimerEntero,SegundoEntero,resultado;
	
	printf("Acontinuación se realizará una operación basica entre dos enteros\n");
	printf("Ingrese primer entero: ");
	scanf("%d",&PrimerEntero);
	printf("Ingrese segundo entero: ");
	scanf("%d",&SegundoEntero);
	printf("Eliga el dígito de la operación a realizar\n1.Suma\n2.Resta\n3.Multiplicación\n4.Division");
	scanf("%d",&operacion);
	
	switch (operacion)
	{
		case 1: 	
			resultado=suma(PrimerEntero,SegundoEntero);
			break;
		case 2:
			resultado=resta(PrimerEntero,SegundoEntero);
			break;
		case 3:
			resultado=multiplicacion(PrimerEntero,SegundoEntero);
			break;
		case 4:
			resultado=division(PrimerEntero,SegundoEntero);
			break;
	}
	
	printf("El resutado es: %d",resultado);
	return 0;
}