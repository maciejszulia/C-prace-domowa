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