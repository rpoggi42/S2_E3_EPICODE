#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	c = 0;
	printf("Inserisci il fattore1: ");
	scanf("%d", &a);
	printf("Inserisci il fattore2: ");
	scanf("%d", &b);
	for (int i = 0; i != b; i++)
	{
		c = c + a;
	}
	printf("Il prodotto è: %d\n", c);
	return (0);
}
