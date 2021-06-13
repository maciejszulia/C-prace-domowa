#include <stdio.h>

int main()
{
    char ch;
    unsigned int odstepy = 0, znaki = 0, inne = 0;

    printf("wpisz tekst: ");
    while ((ch = getchar()) != '#')
    {
        if (((ch = getchar()) == '\n'))
            znaki++;
        else if (((ch = getchar()) == ' '))
            odstepy++;
        else
            inne++;
    }

    printf("znaki nowej linii: %d \n", znaki);
    printf("odstepy: %d \n", odstepy);
    printf("inne znaki: %d \n", inne);

    return 0;
}
