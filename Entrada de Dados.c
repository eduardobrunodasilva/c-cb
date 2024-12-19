#include <stdio.h>

int main () {

    int idade;
    double salario, altura;
    char genero;
    char nome[50] = "Maria Silva";


    salario = 5800.5;
    altura = 1.63;
    genero = 'F';


    printf("Digite o valor da idade: ");
    scanf("%d", &idade);
    printf("Digite o valor do salario: ");
    scanf("%lf", &salario);
    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);
    printf("Digite o nome da pessoa: ");
    scanf("%s", nome);

    printf("Idade = %d\n", idade);
    printf("Salario = %.2lf\n", salario);
    printf("Altura = %.2lf\n", altura);
    printf("Nome = %s\n", nome);

    return 0;
}

