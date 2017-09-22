#include<stdio.h>
int main(void)
{
	int number, sign;
	printf("prosze podac liczbe: ");
	scanf("%d", &number);

	if(number <0)
		sign=-1;
	else if (number ==0)
		sign =0;
	else //if (number >0)
		sign=1;
	printf("signum = %d\n", sign);
	return 0;
}
