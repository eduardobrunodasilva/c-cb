#include <stdio.h>


int main()
{
    int X, Y, soma, troca;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &X, &Y);

    if (X > Y) {
        troca = X;
        X = Y;
        Y = troca;
    }
    soma = 0;
    for (int i = X+1; i < Y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    printf("Soma dos impares = %d\n", soma);

    return 0;
}
