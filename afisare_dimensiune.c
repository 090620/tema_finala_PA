#include <stdio.h>       //Includem biblioteca standard de intrare/iesire si fisierul header afisare_homari.h, care contine prototipul functiei afisare_homari().
#include "afisare_homari.h"

int max(int a, int b) {  //Definim functia max() pentru a returna maximul dintre doua numere
    return (a > b) ? a : b;
}

void afisare_homari(int dp[MAX_HOMARI][MAX_HOMARI], int marime[MAX_HOMARI], int val[MAX_HOMARI], int n, int x) {  //Definim functia afisare_homari() care afiseaza homarii inclusi in plasa, luand ca argumente matricea dp, vectorii marime si val, si numarul de homari n si capacitatea plasei x
    printf("Homarii inclusi in plasa sunt:\n"); //Afiseaza un mesaj care indica ca urmeaza sa se afiseze homarii inclusi in plasa.
    int i = n, j = x; //Initializam variabilele i si j pentru a parcurge matricea dp de la ultimul element la primul si de la ultima capacitate a plasei la prima

    while (i > 0 && j > 0) {   //Initiam o bucla while pentru a parcurge matricea dp si capacitatea plasei pana cand ajungem la primul element sau la o capacitate nula a plasei
        if (dp[i][j] != dp[i - 1][j]) {  //Verificam daca valoarea din matricea dp la pozitia curenta difera de cea de pe linia anterioara
            printf("Homar %d: Dimensiune = %d, Valoare = %d\n", i, marime[i], val[i]); //Afisam detaliile homarului, inclusiv dimensiunea si valoarea acestuia
            j -= marime[i]; //Scadem dimensiunea homarului din capacitatea curenta a plasei
        }
        i--;  //Trecem la homarul anterior si inchidem functia afisare_homari()
    }
}
