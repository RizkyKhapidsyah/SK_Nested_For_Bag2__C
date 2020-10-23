#include <stdio.h>
#include <conio.h>

int main()
{
	int alpha, numeric;


	for (alpha = 'A'; alpha < 'K'; alpha++)
	{
		for (numeric = 0; numeric < 10; numeric++)
			printf("%c%d\t", alpha, numeric);
		putchar('\n');
	}

	_getch();
	return(0);
}