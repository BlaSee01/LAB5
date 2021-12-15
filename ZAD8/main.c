#include <stdio.h>
#include <stdlib.h>

enum pro{normalny, promocja, superpromocja};

struct produkt{
    int liczebnosc;
    char *nazwa;
    enum pro promocja;
    float cena;
}tab[1000];

int main()
{

    tab[0].liczebnosc = 3;
    tab[0].nazwa = "P1";
    tab[0].promocja = normalny;
    tab[0].cena = 5.80;

    tab[1].liczebnosc = 1;
    tab[1].nazwa = "P2";
    tab[1].promocja = promocja;
    tab[1].cena = 42;

    tab[2].liczebnosc = 5;
    tab[2].nazwa = "P3";
    tab[2].promocja = normalny;
    tab[2].cena = 12.5;

    tab[3].liczebnosc = 2;
    tab[3].nazwa = "P4";
    tab[3].promocja = superpromocja;
    tab[3].cena = 7.99;

    for(int i = 0 ; i < 4 ; i++){
        printf("Nazwa: %s, liczebnosc: %d, cena: %f, czy_promocja: " , tab[i].nazwa, tab[i].liczebnosc, tab[i].cena);
        if(tab[i].promocja==promocja){
            printf("Promocja\n");
        }else if(tab[i].promocja==superpromocja){
            printf("Superpromocja\n");
        }else{
            printf("Brak promocji\n");
        }
    }

    printf("Suma produktow: %d" , tab[0].liczebnosc+tab[1].liczebnosc+tab[2].liczebnosc+tab[3].liczebnosc);
    printf("\nSrednia cena: %f" , (tab[0].cena+tab[1].cena+tab[2].cena+tab[3].cena)/4);

    float min = tab[0].cena;

    for(int i = 1 ; i < 4 ; i++){
        if(tab[i].cena<min){
            min = tab[i].cena;
        }
    }

    int pom;

    for(int i = 0 ; i < 4 ; i++){
        if(tab[i].cena==min){
            pom = i;
        }
    }

    printf("\nNazwa najtanszego: %s, cena: %f" , tab[pom].nazwa, min);

    return 0;
}
