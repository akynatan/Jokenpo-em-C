#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main ()

{
    system ("color f9");
    setlocale (LC_ALL,"portuguese");
    char jogador1[20], jogador2[20];
    int cont, operacao1, operacao2, cpu, modojogo;
        do
        {
        printf ("       **     **     **    **  ********  ***         **  ** ********     **      \n");
        printf ("       **  **   **   **   **   ********  ****        **  ** ********   **   **   \n");
        printf ("       **  **   **   **  **    **        ** **       **  **       **   **   **   \n");
        printf ("       **  **   **   ** **     **        **   **     **  **       **   **   **    \n");
        printf ("       **  **   **   ****      ********  **    **    **  ** ********   **   **   \n");
        printf ("       **  **   **   ****      ********  **     **   **  ** ********   **   **   \n");
        printf ("       **  **   **   ** **     **        **      **  **  **            **   **    \n");
        printf (" **    **  **   **   **  **    **        **       ** **  **            **   **    \n");
        printf (" **    **  **   **   **   **   ********  **        ****  **            **   **   \n");
        printf ("  ******     **      **    **  ********  **         ***  **               **     \n");
        system ("color fa");
        Sleep (40);
        system ("color fb");
        Sleep (40);
        system ("color fc");
        Sleep (40);
        system ("color fd");
        Sleep (40);
        system ("color fe");
        Sleep (40);
        system ("color ff");
        Sleep (40);
        system ("color f1");
        Sleep (40);
        system ("color f2");
        Sleep (40);
        system ("color f3");
        Sleep (40);
        system ("color fa");
        Sleep (40);
        system ("color fb");
        Sleep (40);
        system ("color fc");
        Sleep (40);
        system ("color fd");
        Sleep (40);
        system ("color fe");
        Sleep (40);
        system ("color ff");
        Sleep (40);
        system ("color f1");
        Sleep (40);
        system ("color f2");
        Sleep (40);
        system ("color f3");
        Sleep (40);
        system ("color fa");
        Sleep (40);
        system ("color fb");
        Sleep (40);
        system ("color fc");
        Sleep (40);
        system ("color fd");
        Sleep (40);
        system ("color fe");
        Sleep (40);
        system ("color ff");
        Sleep (40);
        system ("color f1");
        Sleep (40);
        system ("color f2");
        Sleep (40);
        system ("color f3");
        Sleep (40);
        system ("color f4");
        system ("color f9");
        Sleep (40);
        printf ("                              Desenvolvido por Alvaro e Aky Natan - Versão 1.0\n");
        printf ("                                                                    \n");
        printf ("                               Licença expirada. Adquira a versão 1.0 Premium.\n\n\n\n");
        system ("PAUSE");
        system ("cls");

        printf ("\n      Seja bem vindo ao JokenPO!\n\n");
        printf ("       Escolha o modo de jogo:\n\n");
        printf ("       (1) - Player1 x Player2\n");
        printf ("         (2) - Player x CPU\n\n");
        printf ("                   ");
        scanf ("%d", &modojogo);
        system ("cls");
        system ("cls");
        switch (modojogo)
        {
            case 1:
            {
                printf ("Jogador 1, digite seu nome:\n");
                scanf ("%s", jogador1);
                printf ("\nJogador 2, digite seu nome:\n");
                scanf ("%s", jogador2);
                printf ("\n\n\n");
                system ("PAUSE");
                system ("cls");

                printf ("%s, escolha uma opção:\n", jogador1);
                printf ("\n1 - Pedra.\n");
                printf ("          _______     \n");
                printf ("      ---'   ____)     \n");
                printf ("            (_____)   \n");
                printf ("            (_____)   \n");
                printf ("            (____)    \n");
                printf ("      ---.__(___)     \n\n\n");
                printf ("2 - Papel.\n");
                printf ("          _______  \n");
                printf ("      ---'   ____)____  \n");
                printf ("                ______)  \n");
                printf ("                _______)  \n");
                printf ("               _______)  \n");
                printf ("       ---.__________)  \n\n\n");
                printf ("3 - Tesoura.\n");
                printf ("             _______  \n");
                printf ("         ---'   ____)____  \n");
                printf ("                   ______)  \n");
                printf ("                __________)  \n");
                printf ("               (____)  \n");
                printf ("         ---.__(___)  \n\n");

                scanf ("%d", &operacao1);
                while (operacao1==0 || operacao1>3)
                {
                printf ("\n\nOpção Invalida!!\n\n");
                printf ("1 - Pedra.\n");
                printf ("2 - Papel.\n");
                printf ("3 - Tesoura.\n\n");
                printf ("Tente Novamente: ");
                scanf ("%d", &operacao1);
                }
                system ("cls");


                printf ("%s, escolha uma opção:\n", jogador2);
                printf ("\n1 - Pedra.\n");
                printf ("          _______     \n");
                printf ("      ---'   ____)     \n");
                printf ("            (_____)   \n");
                printf ("            (_____)   \n");
                printf ("            (____)    \n");
                printf ("      ---.__(___)     \n\n\n");
                printf ("2 - Papel.\n");
                printf ("          _______  \n");
                printf ("      ---'   ____)____  \n");
                printf ("                ______)  \n");
                printf ("                _______)  \n");
                printf ("               _______)  \n");
                printf ("       ---.__________)  \n\n\n");
                printf ("3 - Tesoura.\n");
                printf ("             _______  \n");
                printf ("         ---'   ____)____  \n");
                printf ("                   ______)  \n");
                printf ("                __________)  \n");
                printf ("               (____)  \n");
                printf ("         ---.__(___)  \n\n");

                scanf ("%d", &operacao2);
                while (operacao2==0 || operacao2>3)
                {
                printf ("\n\nOpção Invalida!!\n\n");
                printf ("1 - Pedra.\n");
                printf ("2 - Papel.\n");
                printf ("3 - Tesoura.\n\n");
                printf ("Tente Novamente: ");
                scanf ("%d", &operacao2);
                }
                system ("cls");


                if (operacao1 == operacao2)
                {
                printf ("Empate!!");
                }
                else if ((operacao1==1 && operacao2==3) || (operacao1==2 && operacao2==1) || (operacao1==3 && operacao2==2))
                {
                printf ("Parabéns %s!! Você ganhou!", jogador1);

                }
                else
                {
                printf ("Parabéns %s!! Você ganhou!", jogador2);
                }
                printf ("\n\n\n\n\n\n\n");
                system ("PAUSE");
                system ("cls");
                printf ("Deseja jogar novamente?\n");
                printf ("1 - Sim\n");
                printf ("2 - Não \n");
                scanf ("%d", &cont);
                system ("cls");
                break;
            }
            case 2:
            {
                printf ("Jogador 1, digite seu nome:\n");
                scanf ("%s", jogador1);
                printf ("\n\n\n");
                system ("PAUSE");
                system ("cls");
                printf ("\n%s, escolha uma opção:\n", jogador1);
                printf ("\n1 - Pedra.\n");
                printf ("          _______     \n");
                printf ("      ---'   ____)     \n");
                printf ("            (_____)   \n");
                printf ("            (_____)   \n");
                printf ("            (____)    \n");
                printf ("      ---.__(___)     \n\n\n");
                printf ("2 - Papel.\n");
                printf ("          _______  \n");
                printf ("      ---'   ____)____  \n");
                printf ("                ______)  \n");
                printf ("                _______)  \n");
                printf ("               _______)  \n");
                printf ("       ---.__________)  \n\n\n");
                printf ("3 - Tesoura.\n");
                printf ("             _______  \n");
                printf ("         ---'   ____)____  \n");
                printf ("                   ______)  \n");
                printf ("                __________)  \n");
                printf ("               (____)  \n");
                printf ("         ---.__(___)  \n\n\n");
                scanf ("%d", &operacao1);
                printf ("\n\n\n");
                system ("PAUSE");
                system ("cls");
                while (operacao1==0 || operacao1>3)
                {
                    printf ("\n\nOpção Invalida!!\n\n");
                    printf ("1 - Pedra.\n");
                    printf ("2 - Papel.\n");
                    printf ("3 - Tesoura.\n\n");
                    printf ("Tente Novamente: ");
                    scanf ("%d", &operacao1);
                }
                system ("cls");

                srand ( (unsigned) time(NULL));
                cpu =rand()%3;
                switch (cpu)
                {
                    case 0: printf ("CPU escolheu Pedra\n\n");break;
                    case 1: printf ("CPU escolheu Papel\n\n");break;
                    case 2: printf ("CPU escolheu Tesoura\n\n");break;
                }


                if (operacao1 == (cpu+1))
                {
                    printf ("Empate!!");
                }
                else if ((operacao1==1 && cpu==2) || (operacao1==2 && cpu==0) || (operacao1==3 && cpu==1))
                {
                    printf ("Parabéns %s!! Você ganhou!", jogador1);

                }
                else
                {
                    printf ("A máquina ganhou de você. Se esforçe mais!!");
                }
                printf ("\n\n\n");
                system ("PAUSE");
                system ("cls");
                printf ("Deseja jogar novamente?\n");
                printf ("1 - Sim\n");
                printf ("2 - Não \n");
                scanf ("%d", &cont);
                system ("cls");
                break;
            }
        }
        }while (cont==1);
    return(0);
}
