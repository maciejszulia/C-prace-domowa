// praca domowa.c
#include <stdio.h>
#include <math.h>
int main()
{
	//1.3.3 Napisz program, który wczytuje ze standardowego wejścia trzy liczby całkowite 
	//i wypisuje na standardowym wyjściu największą z ich wartości
	//(pamiętaj o przypadku gdy wszystkie podane liczby lub dwie z nich są równe).
	int x, y, z;
	scanf_s("%d%d%d", &x, &y, &z);
	if (x >= y && x >= z)
		printf("%d\n", x);
	if (y >= x && y >= z)
		printf("%d\n", y);
	if (z >= x && z >= y)
		printf("%d\n", z);



	//1.3.7 Napisz program, który wczytuje ze standardowego wejścia
	//współczynniki równania kwadratowego z jedną niewiadomą i wypisuje na standardowym wyjściu 
	//wszystkie rozwiązania rzeczywiste tego równania lub odpowiednią informację w przypadku braku rozwiązań.
	float a, b, c, x1, x2, d;
	printf("Podaj wpolczynniki rownania: ax^2+bx+c\n");
	scanf_s("%f%f%f", &a, &b, &c);
	printf("Rownanie:\n %.f^2+%.fx+%.f\n", a, b, c);
	d = b * b - 4 * a * c;
	if (d > 0)
	{
		x1 = (-b - sqrt(d)) / 2 * a;
		x2 = (-b + sqrt(d)) / 2 * a;
		printf("X1= %.f X2 = %.f", x1, x2);
	}
	else if (d == 0)
	{
		x1 = -b / 2 * a;
		printf("X1= %.f", x1);
	}
	else
		printf("Delta jest ujemna.");

	//1.3.9 Napisz program kalkulator, który wykonuje wybraną przez użytkownika operacją arytmetyczną
	//na dwóch wczytanych liczbach. Program powinien wczytywać dane ze standardowego wejścia 
	//i wypisywać wynik na standardowym wyjściu.

	float a1, b1;
	int op; //id operacji

	scanf_s("%f%f", &a1, &b1);

	printf("twoje liczby to: %f, %f\n", a1, b1);

	printf("1.dodawanie\n2.odejmowanie\n3.mnozenie\n4.dzielnie\n");

	printf("co chcesz zrobic: ");
	scanf_s("%d", &op);

	switch (op)
	{
	case 1:
		printf("%lf", (a1 + b1));
		break;

	case 2:
		printf("%lf", (a1 - b1));
		break;

	case 3:
		printf("%lf", (a1 * b1));
		break;

	case 4:
		printf("%lf", (a1 / b1));
		break;

	default:
		printf("zla instrukcja");
		break;
	}



	return 0;



}

