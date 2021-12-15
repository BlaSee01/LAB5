#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct data{
    int dzien;
    int miesiac;
    int rok;
    char *nazwa;
};

void wypisz(struct data d){
    printf("Nazwa: %s, %d.%d.%d" , d.nazwa, d.dzien, d.miesiac, d.rok);
}

void oblicz(struct data d){
    int a,b,c;

    if(d.dzien==30){
        a = 1;
        if(d.miesiac==12){
            b = 1;
            c = d.rok+1;
        }else{
            b = d.miesiac+1;
            c = d.rok;
        }
    }else{
        a = d.dzien+1;
        b = d.miesiac;
        c = d.rok;
    }
    printf("Data dzien po: %d.%d.%d", a,b,c);
}

void oblicz2(struct data x, struct data y){
    int s1 = abs(x.rok-y.rok)*365;  // PRZYJALEM BRAK LAT PRZESTEPNYCH
    int s2 = abs(x.miesiac-y.miesiac)*30;
    int s3 = abs(x.dzien-y.dzien);

    int suma = s1+s2+s3;

    printf("\nRoznica dni miedzy podana oraz %d.%d.%d wynosi: %d" , y.dzien, y.miesiac, y.rok, suma);
}

int main()
{
    struct data data1;
    printf("Podaj typ kalendarza: ");
    scanf("%s" , data1.nazwa);
    printf("Podaj dzien: ");
    scanf("%d" , &data1.dzien);
    printf("Podaj miesiac: ");
    scanf("%d" , &data1.miesiac);
    printf("Podaj rok: ");
    scanf("%d" , &data1.rok);

    printf("Nazwa: %s, %d.%d.%d\n\n" , data1.nazwa, data1.dzien, data1.miesiac, data1.rok);

    oblicz(data1);

    struct data data2;
    data2.dzien = 12;
    data2.miesiac = 3;
    data2.rok = 2006;

    oblicz2(data1,data2);

    return 0;
}
