#include <stdio.h>
#include <stdlib.h>

int suma(int tab[], int rozmiar){

    int s = 0;
    for(int i = 0 ; i < rozmiar ; i++){
        if((tab[i]<6) || (tab[i]%2==0)){
            s+=tab[i];
        }
    }
    return s;
}

int main()
{

    int t [] = {7, 4, 8, 5, 19};

    printf("Suma: %d" , suma(t,5));

    return 0;
}
