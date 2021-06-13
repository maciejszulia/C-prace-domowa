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