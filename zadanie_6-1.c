#include <stdio.h>
int main()
{
	//rozdział 6 zad 1

	char tab[26];

	for (int j = 0; j < 26; j++)
	{
		int a = 97;
		char c = a;
		tab[j] = c;
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d%c", i, tab[i]);
	}
	
	
	return 0;
}

//Maciej Szulia 154733