#include <stdio.h>
#include <stdlib.h>

enum stan{nawiazane, nienawiazane, w_trakcie_nawiazywania};

struct komputer{
    enum stan stan_pol;
    char *ipv4;
    char *nazwa;
};

void funkcja(struct komputer pc){
    switch(pc.stan_pol){
    case nawiazane: printf("Stan polazenia: Nawiazane\n");
    printf("IPv4: %s\n" , pc.ipv4);
    printf("Nazwa: %s\n" , pc.nazwa);
    break;
    case nienawiazane: printf("Stan polazenia: Nienawiazane\n"); break;
    case w_trakcie_nawiazywania: printf("Stan polazenia: W trakcie nawiazywania\n"); break;
    }

}

int main()
{

    struct komputer komp1;
    komp1.stan_pol = nienawiazane;
    komp1.ipv4 = "192.325.643.124";
    komp1.nazwa = "PC-42";

    struct komputer komp2;
    komp2.stan_pol = nawiazane;
    komp2.ipv4 = "192.325.643.125";
    komp2.nazwa = "PC-43";

    printf("KOMP1:\n");
    funkcja(komp1);
    printf("\nKOMP2:\n");
    funkcja(komp2);

    return 0;
}
