#include <stdio.h>

int main() {

    int idade;
    float altura;
    double salario;
    char nome[81];

    printf("Digite seu nome: ");
    scanf("%79[^\n]s", nome);

    printf("digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu salário: ");
    scanf("%lf", &salario);

    printf("Seu nome é: %s\n", nome);
    printf("Sua idade é %d\n", idade);
    printf("Sua altura é %.2f\n", altura);
    printf("Seu salário é %.2lf\n", salario);

    return 0;
}