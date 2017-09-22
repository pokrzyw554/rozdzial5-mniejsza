#include<stdio.h>
int main(void)
{
	int year, rem4, rem100, rem400;

	printf("podaj rok ktory chcesz obczaic: ");
	scanf("%d", &year);
	rem4 = year % 4;
	rem100 = year % 100;
	rem400 = year % 400;

	if( ( rem4 == 0 && rem100 != 0) !=0 || rem400 ==0)
		printf("podany rok jest przestepny\n");
	else
		printf("ten rok nie jest przestepny.\n");
	return 0;
}
