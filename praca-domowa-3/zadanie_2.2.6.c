//Krzaczkowski, Zadanie 2.2.6
#include <stdio.h>
#include <math.h>

long long int funkcja(unsigned int n, unsigned int m)
{
	if (n == 0 && m == 0)
		return 0;

	return pow(n, m);
}

int main()
{

	printf("%lld ", funkcja(0, 0));

	printf("%lld", funkcja(10, 10));



	return 0;
}