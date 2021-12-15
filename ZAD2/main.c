#include <stdio.h>
#include <stdlib.h>

int pole(int a, int b){
    return a*b;
}

int obwod(int a, int b){
    return 2*a+2*b;
}

int main()
{

    printf("Pole: %d \nObwod: %d" , pole(14,27) , obwod(14,27));

    return 0;
}
