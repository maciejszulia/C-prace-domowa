//zadanie 1 rodział 9 - funkcje
#include <stdio.h>

double min(double x, double y)
{
	if (x > y)
		return y;
	else
		return x;
}


int main()
{
	printf("%lf ", min(0, 1));
	printf("%lf", min(1, 0));



	return 0;
}
