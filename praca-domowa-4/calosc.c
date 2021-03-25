// 3.2.4 Napisz funkcję otrzymującą jako argumenty wskaźnikido dwóch zmien-nych typu int, 
// która zamienia ze sobą wartości wskazywanych zmien-nych tylko wtedy
// gdy wskazywana przez drugi argument zmienna jestmniejsza od zmiennej wskazywanej przez pierwszy argument.

#include<stdio.h>
using namespace std;


void zamien(int* a, int* b)
{
    if (*b > *a)
        swap(*a, *b);
}

int main()
{
    int A, B;

    scanf_s("%d %d", &A, &B);
    printf("A = %d B = %d\n", A, B);

    zamien(&A, &B);

    printf("A = %d B = %d", A, B);

    return 0;
}

// 3.2.5 Napisz funkcję, której argumentami są dwa wskaźniki do stałych typu int
// zaś zwracaną wartością jest suma wartości zmiennych wskazywanych przez argumenty.

// 3.2.6 Napisz funkcję, której argumentami są n typu int oraz w wskaźnik do int
// która przepisuje wartośćndo zmiennej wskazywanej przezw.

//3.2.10 Napisz bezargumentową funkcję, która rezerwuje pamięć
//dla pojedynczej zmiennej typu double i zwraca jako wartość wskaźnik do niej.
