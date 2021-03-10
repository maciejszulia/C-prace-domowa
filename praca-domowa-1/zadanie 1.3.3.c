#include <stdio.h>
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

	return 0;
}

//Maciej Szulia 154733