#include <stdio.h>
#include <stdlib.h>

int ciag(n)
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