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