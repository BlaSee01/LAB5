#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"

int main()
{
    struct triangle trojkat1;
    trojkat1.a = 18;
    trojkat1.b = 12;
    trojkat1.c = 14;

    printf("Obwod trojkata o bokach 12, 14, 18: %d\n" , obwod(trojkat1));
    printf("Pole trojkata o bokach 12, 14, 18: %f\n" , pole(trojkat1));


    return 0;
}
