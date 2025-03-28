#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("\n\n");
    printf("          P  /_\\  P                                \n");
    printf("         /_\\_|_|_/_\\                              \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao       \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao!   \n");
    printf("    |     |  |_|  |     |                           \n");
    printf("    |_____| ' _ ' |_____|                           \n");
    printf("          \\__|_|__/                                 \n");
    printf("\n\n");

    int chute;
    int acertou = 0;
    int tentativas = 1;
    double pontos = 1000;

    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;
    int numerodetentativas;

    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    if(nivel == 1) {
        numerodetentativas = 20;
    }
    else if (nivel == 2) {
        numerodetentativas = 15;
    }
    else {
        numerodetentativas = 6;
    }

    for(int i = 1; i <= numerodetentativas; i++) {
        printf("tentativa %d\n", tentativas);
        printf("Qual eh o seu chute?\n ");
        scanf("%d", &chute);

        if(chute < 0) {
            printf("Voce nao pode chutar numeros negativos\n");
            continue;
        }

        

        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou) {
            break;
        } else if(maior) {
            printf("Seu chute foi maior do que o numero secreto!\n");
        } else {
            printf("Seu chute foi menor do que o numero secreto!\n");
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }
    if(acertou){    

        printf("Parabens! Voce acertou!\n");
        printf("Voce fez %.2f pontos\n", pontos);
        printf("Obrigado por jogar!\n");


        printf("\n\n");
        printf("                OOOOOOOOOOO                     \n");
        printf("            OOOOOOOOOOOOOOOOOOO                 \n");
        printf("         OOOOOO  OOOOOOOOO  OOOOOO              \n");
        printf("       OOOOOO      OOOOO      OOOOOO            \n");
        printf("     OOOOOOOO  #   OOOOO  #   OOOOOOOO          \n");
        printf("    OOOOOOOOOO    OOOOOOO    OOOOOOOOOO         \n");
        printf("   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO        \n");
        printf("   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO        \n");
        printf("   OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO        \n");
        printf("    OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO         \n");
        printf("     OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO          \n");
        printf("      OOOOO   OOOOOOOOOOOOOOO   OOOO            \n");
        printf("       OOOOOO   OOOOOOOOO   OOOOOO              \n");
        printf("          OOOOOO         OOOOOO                 \n");
        printf("               OOOOOOOOOOOO                      \n");
        printf("\n\n");


    } else{
        printf("Voce perdeu! Tente de novo!\n");

        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
        
    }

}