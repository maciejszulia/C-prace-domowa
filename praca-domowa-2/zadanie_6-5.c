#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	//rozdział 6 zad 5

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

//Maciej Szulia 154733