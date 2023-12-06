#include <stdio.h>

int main(void)
{
	float a;
	float b;
	float c;

	c = 0;
	printf("Inserire il primo valore: ");
	scanf("%f", &a);
	printf("Inserire il secondo valore: ");
	scanf("%f", &b);
	c = (a + b) / 2;
	printf("La media aritmetica tra i valori %.1f e %.1f è %.1f", a, b, c);
	return (0);
}
