#include<stdio.h>
int main(void)
{
	int number;

	printf("podaj liczbe: ");
	scanf("%d", &number);

	if( number<0)
		number = -number;

	printf("wartosc bezwzgledna to %d\n", number);
	return 0;
}
