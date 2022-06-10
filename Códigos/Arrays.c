#include <stdio.h>
#define TAM 15
int main() {
    int par[TAM], impar[TAM], qtd_par=0, qtd_impar=0, i, j, x,T;
    for (i = 0; i < TAM; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            par[qtd_par%5] = x;
            qtd_par++;
        }
        else {
            impar[qtd_impar%5] = x;
            qtd_impar++;

            }
        }

    for (j = 0; j < 5; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

   for (j = 0; j < 5; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
     }

    return 0;
}
