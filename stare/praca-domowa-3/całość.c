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

}


//zadanie 2 rodział 9 - funkcje
#include <stdio.h>
#include <stdlib.h>

void rzad_zn(int ch, int i, int j)
{
    for (int x = 0; x < j; x++)
    {
        if (x >= i - 1)
            printf("%s", ch);
        else
            printf("%s", " ");
    }
}

int main()
{
    int d = "\$";
    rzad_zn(d, 1, 5);
}

//Krzaczkowski, Zadanie 2.2.5
#include <stdio.h>
#include <math.h>

int potega(int liczba)
{
	return pow(2, liczba);
}

int main()
{
	printf("%d", potega(3));

}

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

}

//Krzaczkowski, Zadanie 2.2.22
#include <stdio.h>
#include <stdlib.h>

int ciag(int n)
{
    int a[n];
    a[0] = 1;
    int i = 1;
    while (i <= n)
    {
        a[i] = 2 * a[i - 1] + 5;
        i++;
    }
    printf("\n%d", a[n]);
}
int main()
{
    ciag(2);
}

//2.2.33
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int suma(int a, ...)
{
    va_list arg;
    int suma = 0, i;
    va_start(arg, a);
    for (i = a; i; i = va_arg(arg, int))
    {
        suma = suma + i;
    }
    va_end(arg);
    return suma;
}

int main()
{
    printf("\n%d", suma(1, 2, 0));
}