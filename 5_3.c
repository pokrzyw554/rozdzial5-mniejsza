#include<stdio.h>
int main(void)
{
	int number_to_test, remainder;
	printf("podaj liczbe ktora chcesz obczaic: ");
	scanf("%d", &number_to_test);
	remainder = number_to_test % 2;

	if (remainder == 0)
		printf("podana liczba jest parzysta\n");
	if(remainder != 0)
		printf("podana liczba jest nieparzysta\n");
	return 0;
}
