/*
//zadanie 6-1

#include <stdio.h>
int main()
{

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

//zadanie 6-2

#include <stdio.h>
int main()
{
	//rozdział 6 zad 2

	for (int j = 1; j <= 5; j++)
	{
		for (int i = 1; i <= j; i++)
		{
			printf("\$");
			
		}
		printf("\n");
	}


	
	
	return 0;
}

//zadanie 6-3

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

//zadanie 6-4

#include <stdio.h>
int main()
{
	//rozdział 6 zad 4

	unsigned char litera;

	scanf_s("%c", &litera);

	unsigned short int litera_do_int = litera;

	if (litera_do_int < 65 || litera_do_int>90)
	{
		printf("poza zasięgiem ASCII");
		return 0;
	}

	unsigned short int dlugosc = litera_do_int - 65;
	printf("dlugosc = %hu \n", dlugosc);

	for (int i = 0; i < dlugosc; i++)
	{
		printf("%c", litera_do_int);
		for (int alfabet_od_tylu = 0; alfabet_od_tylu < dlugosc; alfabet_od_tylu++)
		{
			printf(" ");
		}
	}

	printf("\n%c", litera_do_int);

	//poddaje sie, dalej nie zrobie
	
	return 0;
}

//zadanie 6-5

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int granica_gorna;
	int granica_dolna;

	printf("podaj granice gorna: ");
	scanf_s("%d", &granica_gorna);

	printf(" podaj granice dolna: ");
	scanf_s("%d", &granica_dolna);

	if (granica_dolna > granica_gorna)
	{
		int temp = granica_dolna;
		granica_dolna = granica_gorna;
		granica_gorna = temp;
	}

	printf("granica_dolna = %d\n", granica_dolna);
	printf("granica_gorna = %d\n", granica_gorna);

	int dlugosc_tab = granica_gorna - granica_dolna;
	printf("dlugosc = %d\n", dlugosc_tab);

	int tab[255]; //int[dlugosc_tab] zwraca błąd

	for (int i = 0; i <= dlugosc_tab; i++)
	{
		tab[i] = granica_dolna;
		printf("[# %d]: %d, ", i , tab[i]);
		printf("kwadrat = %.0lf, szescian = %.0lf \n", pow(tab[i], 2), pow(tab[i], 3));
		granica_dolna++;
	}


	return 0;
}

//zadanie 7-1

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


*/

//Maciej Szulia 154733

