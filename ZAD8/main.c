#include <stdio.h>
#include <stdlib.h>

//  ROWNIEZ ZADANIE 9

enum pro{normalny, promocja, superpromocja};

struct produkt{
    int liczebnosc;
    char *nazwa;
    enum pro promocja;
    float cena;
}tab[5];

struct produkt2{
    int liczebnosc;
    char *nazwa;
    enum pro promocja;
    float cena;
}tab2[6];

struct produkt3{
    int liczebnosc;
    char *nazwa;
    enum pro promocja;
    float cena;
}tab3[4];

struct produkt funkcja(struct produkt a){
    a.liczebnosc = 3;
    a.nazwa = "P5";
    a.promocja = normalny;
    a.cena = 90;

    return a;
};

struct produkt2* funkcja2(struct produkt a[], int index){

    struct produkt2 t2[6];

    for(int i = 0 ; i < 6 ; i++){
        if(i==index){
            t2[i].liczebnosc = 66;
            t2[i].nazwa = "P-DOD-IDX";
            t2[i].promocja = superpromocja;
            t2[i].cena = 4.2;
        }else if(i<index){
            t2[i].liczebnosc = a[i].liczebnosc;
            t2[i].nazwa = a[i].nazwa;
            t2[i].promocja = a[i].promocja;
            t2[i].cena = a[i].cena;
        }else{
            t2[i].liczebnosc = a[i-1].liczebnosc;
            t2[i].nazwa = a[i-1].nazwa;
            t2[i].promocja = a[i-1].promocja;
            t2[i].cena = a[i-1].cena;
        }
    }
    return t2;
}

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

    printf("\n----------------------------------------------\n");

    //  DODANIE OSTATNIEGO ELEMENTU

    tab[4] = funkcja(tab[4]);

     printf("DODANY NOWY ELEMENT NA KONCU: Nazwa: %s, liczebnosc: %d, cena: %f, czy_promocja: " , tab[4].nazwa, tab[4].liczebnosc, tab[4].cena);
        if(tab[4].promocja==promocja){
            printf("Promocja\n");
        }else if(tab[4].promocja==superpromocja){
            printf("Superpromocja\n");
        }else{
            printf("Brak promocji\n");
        }

    // DODANIE NOWEGO ELEMENTU O DANYM INDEKSIE (dla przykladu index = 3)

    int idx = 3;

    tab2[0].liczebnosc = tab[0].liczebnosc;
    tab2[0].nazwa = tab[0].nazwa;
    tab2[0].promocja = tab[0].promocja;
    tab2[0].cena = tab[0].cena;

    tab2[1].liczebnosc = tab[1].liczebnosc;
    tab2[1].nazwa = tab[1].nazwa;
    tab2[1].promocja = tab[1].promocja;
    tab2[1].cena = tab[1].cena;

    tab2[2].liczebnosc = tab[2].liczebnosc;
    tab2[2].nazwa = tab[2].nazwa;
    tab2[2].promocja = tab[2].promocja;
    tab2[2].cena = tab[2].cena;

    tab2[3].liczebnosc = 10;
    tab2[3].nazwa = "P-DOD";
    tab2[3].promocja = promocja;
    tab2[3].cena = 2.5;

    tab2[4].liczebnosc = tab[3].liczebnosc;
    tab2[4].nazwa = tab[3].nazwa;
    tab2[4].promocja = tab[3].promocja;
    tab2[4].cena = tab[3].cena;

    printf("DODANY NOWY ELEMENT: Nazwa: %s, liczebnosc: %d, cena: %f, czy_promocja: " , tab2[3].nazwa, tab2[3].liczebnosc, tab2[3].cena);
        if(tab2[3].promocja==promocja){
            printf("Promocja\n");
        }else if(tab2[3].promocja==superpromocja){
            printf("Superpromocja\n");
        }else{
            printf("Brak promocji\n");
        }




    // USUNIECIE DANEGO INDEXU np. 0

    tab3[0].liczebnosc = tab[1].liczebnosc;
    tab3[0].nazwa = tab[1].nazwa;
    tab3[0].promocja = tab[1].promocja;
    tab3[0].cena = tab[1].cena;

    tab3[1].liczebnosc = tab[2].liczebnosc;
    tab3[1].nazwa = tab[2].nazwa;
    tab3[1].promocja = tab[2].promocja;
    tab3[1].cena = tab[2].cena;

    tab3[2].liczebnosc = tab[3].liczebnosc;
    tab3[2].nazwa = tab[3].nazwa;
    tab3[2].promocja = tab[3].promocja;
    tab3[2].cena = tab[3].cena;

    tab3[3].liczebnosc = tab[4].liczebnosc;
    tab3[3].nazwa = tab[4].nazwa;
    tab3[3].promocja = tab[4].promocja;
    tab3[3].cena = tab[4].cena;

    printf("\nSTAN TABELI 'TAB' PO USUNIECIU INDEXU '0':\n");

    for(int i = 0 ; i < 4 ; i++){
        printf("Nazwa: %s, liczebnosc: %d, cena: %f, czy_promocja: " , tab3[i].nazwa, tab3[i].liczebnosc, tab3[i].cena);
        if(tab3[i].promocja==promocja){
            printf("Promocja\n");
        }else if(tab3[i].promocja==superpromocja){
            printf("Superpromocja\n");
        }else{
            printf("Brak promocji\n");
        }
    }

    //  NOWA TABLICA MA JEDEN ELEMANT MNIEJ

    //  POSORTOWANE PO CENIE

    printf("\nSTAN TABELI 'TAB' PO SORTOWANIU PO CENIE:\n");

    float ceny[4];

    ceny[0] = tab3[0].cena;
    ceny[1] = tab3[1].cena;
    ceny[2] = tab3[2].cena;
    ceny[3] = tab3[3].cena;

    float pom2;

    for(int i = 0 ; i < 4 ; i++){
          for(int j = 0 ; j < 3 ; j++){
            if(ceny[j]>ceny[j+1]){
                pom2 = ceny[j];
                ceny[j] = ceny[j+1];
                ceny[j+1] = pom2;
            }
          }
    }

    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            if(ceny[i]==tab3[j].cena){
        printf("Nazwa: %s, liczebnosc: %d, cena: %f, czy_promocja: " , tab3[j].nazwa, tab3[j].liczebnosc, tab3[j].cena);
        if(tab3[j].promocja==promocja){
            printf("Promocja\n");
        }else if(tab3[j].promocja==superpromocja){
            printf("Superpromocja\n");
        }else{
            printf("Brak promocji\n");
        }
        break;
            }
        }
    }



    return 0;
}
