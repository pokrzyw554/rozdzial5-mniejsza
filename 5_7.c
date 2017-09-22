#include<stdio.h>
int main(void)
{
	char c;
	printf("podaj znak:\n");
	scanf ("%c", &c);

	if( (c >= 'a' && c<= 'z') || (c >= 'A' && c<= 'Z'))
		printf("podany znak jest litera.\n");
	else if(c>='0' && c<='9')
		printf("podany znak to cyferka\n");
	else
		printf("podano znak specjalny\n");
	printf("dziekuje koneic programu\n");

	return 0;
}
