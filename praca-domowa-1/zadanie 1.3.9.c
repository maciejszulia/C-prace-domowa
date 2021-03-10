#include <iostream>

int main()
{
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
	
	default :
		printf("zla instrukcja");
		break;
	}


}

//Maciej Szulia 154733
