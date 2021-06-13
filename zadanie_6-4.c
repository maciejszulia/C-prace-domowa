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

//Maciej Szulia 154733