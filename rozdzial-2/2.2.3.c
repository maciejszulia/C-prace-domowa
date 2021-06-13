#include <stdio.h>

int dzielnik(int liczba)
{
	for (int i = liczba - 1; i > 0; i--)
		if (liczba % i == 0)
			return i;
}

int main()
{
	unsigned int n;
	scanf_s("%u", &n);
	if (n <= 2)
		return 0;
	printf("%i", dzielnik(n));

	return 0;
}