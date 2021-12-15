#include <stdio.h>
#include <stdlib.h>

struct samochod_1{
    char *model;
    char *marka;
    int rocznik;
    float spalanie;
};

union samochod_2{
    char *model;
    char *marka;
    int rocznik;
    float spalanie;
};

struct samochod_3{
    union{
        char *model;
        char *marka;
        int rocznik;
        float spalanie;
    };
};

int main()
{

    struct samochod_1 samochod1;
    union samochod_2 samochod2;
    struct samochod_3 samochod3;

    printf("Miejsce zajete przez 'struct': %d\nMiejsce zajete przez 'union': %d\n" , sizeof(samochod1) , sizeof(samochod2));
    printf("Miejsce zajete przez 'struct': %d\nMiejsce zajete przez 'struct', z zagniezdzonym 'union': %d\n" , sizeof(samochod1) , sizeof(samochod3));
    return 0;
}
