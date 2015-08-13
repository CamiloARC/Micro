#include <stdio.h>
#include <calculadora.h>

int main(void)
{
	int operacion,a,b,x;
	printf("Ingrese primer entero: ");
	scanf("%d",&a);
	printf("Ingrese segundo entero: ");
	scanf("%d",&b);
	printf("¿Que operacion desea realizar?\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Division");
	scanf("%d",&operacion);
	switch (operacion)
	{
		case 1: 	
		x=suma(a,b);
		break;
		case 2:
		x=resta(a,b);
		break;
		case 3:
		x=multiplicacion(a,b);
		break;
		case 4:
		x=division(a,b);
		break;
	};
	printf("El resutado es: %d",x);
	return 0;
}