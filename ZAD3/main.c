#include <stdio.h>
#include <stdlib.h>

enum week{poniedzialek=1, wtorek, sroda, czwartek, piatek, sobota, niedziela};

void funkcja(enum week a){
    switch(a){
        case 1: printf("Poniedzialek\n"); break;
        case 2: printf("Wtorek\n"); break;
        case 3: printf("Sroda\n"); break;
        case 4: printf("Czwartek\n"); break;
        case 5: printf("Piatek\n"); break;
        case 6: printf("Sobota\n"); break;
        case 7: printf("Niedziela\n"); break;
    }
}

int main()
{
enum week x = sobota;
enum week y = sroda;
enum week z = wtorek;

funkcja(x);
funkcja(y);
funkcja(z);



    return 0;
}
