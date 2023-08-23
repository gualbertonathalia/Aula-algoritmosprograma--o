#include <stdio.h>

int main() {
    char nome[100];
    char idade[10];
    float media;
    char matricula[40];
    char endereco[50];
    char curso[40];
    char periodo[20];
    int semestre;
    char disciplinas[100];

    char dados = 'n';
    int x = 0;

    printf("\nBem Vindo! Venha fazer o seu Cadastro\n\n");

    while (x != 1) {
        printf("\nDigite seu nome completo: ");
        scanf(" %s", nome);
        printf("Digite sua idade: ");
        scanf(" %s", idade);
        printf("Digite sua média: ");
        scanf("%f", &media);
        printf("Digite sua matrícula: ");
        scanf(" %s", matricula);
        // ... continue lendo os outros campos

        printf("\n----------------------------------------");
        printf("\nDADOS PARA CONFIRMACAO\n");
        printf("\nSeu nome: %s", nome);
        printf("\nIdade: %s", idade);
        printf("\nMatricula: %s", matricula);
        // ... imprima os outros campos
        printf("\nMedia: %.2f", media);
        printf("\n----------------------------------------");

        printf("\n\nVoce confirma seus dados? (s/n): ");
        scanf(" %c", &dados);

        if (dados == 's') {
            x = 1;
            printf("\nSua resposta foi %c\n", dados);
        } else {
            x = 0;
            printf("\nSeu cadastro foi negado. Por favor volte para o inicio!\n");
        }
        printf("\n----------------------------------------");
    }

    printf("\nCADASTRO FEITO COM SUCESSO!\n\n");
    return 0;
}