#include <iostream>

int main()
{
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
		
	return 0;

}

//Maciej Szulia 154733
