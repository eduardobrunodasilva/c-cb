#include <stdio.h>

int main()
{
    int X, Y;
    char crescente, decrescente;

    printf("Digite dois numeros:\n");
    scanf("%d", &X);
    scanf("%d", &Y);

    while (X != Y)
    {
        if (X < Y)
        {
            printf("Crescente\n");
        }
        else
        {
            printf("Decrescente\n");
        }
        printf("Digite outros dois numeros:\n");
        scanf("%d", &X);
        scanf("%d", &Y);
    }


return 0;
}
