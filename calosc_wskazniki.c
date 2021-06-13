#include <stdio.h>
#include <stdlib.h>


int dwaWskazniki(int *a, int *b){
    if(*a>=*b){
        return *b;
    }
    else
        return *a;

}

int* dwaWskazniki2(int *a, int *b){
    if(*a>=*b){
        return b;
    }
    else
        return a;

}
void switcharoo(int *a, int *b){

    int  placeholder = *a;
    *a = *b;
    *b = placeholder;

}

void switcharoo2(int *a, int *b){
    if (*a>*b){
    int  placeholder = *a;
    *a = *b;
    *b = placeholder;
    }
}

int sumaWs(int *a, int*b){

    int suma = *a+*b;
    return suma;

}

void endowu(int n, int *w){
    *w = n;


}
int * miejsce(){


    return malloc(sizeof(int));

}

int * miejsce2(){
    return malloc(sizeof(double));
    }

int * miejsce3(unsigned int n){

    return malloc(n*sizeof(int));


}
int * miejsce4(unsigned int n){

    return malloc(n*sizeof(double));


}

void constToVar(const int *a, int *b){
    *b = *a;
}

void constToVar2(const int *a, const * int b){



}


int main()
{

   const int a = 6;
    int b = 3;
  //  printf("%d", dwaWskazniki2(&a, &b));

//switcharoo2(&a, &b);
//printf("%d%d", a, b);
   // printf("%d", sumaWs(&a, &b));
//    endowu(a, &b);
  //  printf("%d\n%d", a, b);
    //printf("%d", miejsce());
    //printf("%d", miejsce2());
    //printf("%d", miejsce3(5));
    //printf("%d", miejsce4(5));

   // constToVar(&a, &b);
    //printf("%d",  b);

    return 0;
}
