#include "header.h"
int main() {
    int n, x;  //Declaram variabilele n si x pentru a retine numarul de homari si capacitatea plasei
    printf("Numarul de homari si capacitatea plasei: "); //Afiseaza un mesaj pentru utilizator pentru a introduce numarul de homari si capacitatea plasei si citeste valorile introduse
    scanf("%d %d", &n, &x);
    int marime[MAX_HOMARI], val[MAX_HOMARI];   //Declaram vectorii marime si val pentru a stoca dimensiunea si valoarea fiecarui homar, respectiv, si matricea dp pentru a stoca rezultatele intermediare ale programarii dinamice
    int dp[MAX_HOMARI][MAX_HOMARI];

    printf("Introdu dimensiunea si valoarea fiecarui homar:\n"); //Afiseaza un mesaj pentru utilizator pentru a introduce dimensiunea si valoarea fiecarui homar in parte, apoi citeste aceste valori si le stocheaza in vectorii marime si val
    for (int i = 1; i <= n; i++) {
        printf("Dimensiunea si valoarea homarului %d: ", i);
        scanf("%d %d", &marime[i], &val[i]);
    }

    for (int i = 0; i <= n; i++) {    //Calculeaza rezultatele intermediare ale programarii dinamice pentru a determina valoarea maxima a homarilor care incap in plasa
        for (int j = 0; j <= x; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (marime[i] <= j) {
                dp[i][j] = max(val[i] + dp[i - 1][j - marime[i]], dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    printf("Valoarea maxima este: %d\n", dp[n][x]); //Afiseaza valoarea maxima a homarilor care incap in plasa
    afisare_homari(dp, marime, val, n, x); //Apeleaza functia afisare_homari() pentru a afisa homarii care sunt inclusi in plasa
    return 0; //Încheie functia main() cu o valoare de return 0 pentru a indica ca programul s-a incheiat cu succes
}
