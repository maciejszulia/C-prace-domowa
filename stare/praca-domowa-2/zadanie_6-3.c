#include <stdio.h>
int main()
{
	//rozdział 6 zad 3
	
	for (int j = 1; j <= 6; j++)
	{

		int a = 71;
		char c = a;

		for (int i = 1; i <= j; i++)
		{
			printf("%c", c = c - 1);
		}
		printf("\n");
	}
	
	
	return 0;
}

//Maciej Szulia 154733