#include <stdio.h>
#include <string.h>

int main()
{

    int idade = 20;
    double salario, altura;
    char genero;
    char nome[50] = "Maria Silva";


    salario = 5800.5;
    altura = 1.63;
    genero = 'F';


    printf("Idade = %d\n", idade);
    printf("Salario = %.2lf\n", salario);
    printf("Altura = %.2lf\n", altura);
    printf("Genero = %c\n", genero);
    printf("Nome = %s\n", nome);


    return 0;
}
