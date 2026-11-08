#include <stdio.h>
#include <stdlib.h>

void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main()
{
    char respFinal = 's';
    do
    {
        system("cls");
        {
            printf("Calculadora Simples\n"
                   "Selecione uma operacao:\n"
                   "1. Adicao\n"
                   "2. Subtracao\n"
                   "3. Multiplicacao\n"
                   "4. Divisao\n"
                   "5. Sair\n"
                   "Opcao:\n");

            int caso;
            float num1, num2, resultado;

            if (scanf("%d", &caso) != 1)
            {
                printf("Erro: Entrada nao numerica. Digite um numero de 1 a 5.\n");
                limparBuffer();

                do
                {
                    printf("Deseja realizar outra operacao? (s/n):\n");
                    scanf(" %c", &respFinal);
                } while (respFinal != 's' && respFinal != 'S' && respFinal != 'n' && respFinal != 'N');

                continue;
            }

            if (caso < 1 || caso > 5)
            {
                printf("Numero Invalido, tente novamente!\n");

                do
                {
                    printf("Deseja realizar outra operacao? (s/n):\n");
                    scanf(" %c", &respFinal);
                } while (respFinal != 's' && respFinal != 'S' && respFinal != 'n' && respFinal != 'N');

                continue;
            }

            switch (caso)
            {
            case 1:
                printf("Digite o primeiro numero\n");
                scanf("%f", &num1);
                printf("Digite o segundo numero\n");
                scanf("%f", &num2);
                resultado = num1 + num2;
                if ((int)resultado == resultado && (int)num1 == num1 && (int)num2 == num2)
                {
                    printf("Resultado: %.0f + %.0f = %.0f\n", num1, num2, resultado);
                }
                else
                {
                    printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
                }

                do
                {
                    printf("Deseja realizar outra operacao? (s/n):\n");
                    scanf(" %c", &respFinal);
                    if (respFinal != 's' && respFinal != 'S' && respFinal != 'n' && respFinal != 'N')
                    {
                        printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
                    }
                } while (respFinal != 's' && respFinal != 'S' && respFinal != 'n' && respFinal != 'N');
                break;

            case 2:
                printf("Digite o primeiro numero\n");
                scanf("%f", &num1);
                printf("Digite o segundo numero\n");
                scanf("%f", &num2);
                resultado = num1 - num2;
                if ((int)resultado == resultado && (int)num1 == num1 && (int)num2 == num2)
                {
                    printf("Resultado: %.0f - %.0f = %.0f\n", num1, num2, resultado);
                }
                else
                {
                    printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
                }

                do
                {
                    printf("Deseja realizar outra operacao? (s/n):\n");
                    scanf(" %c", &respFinal);
                    if (respFinal != 's' && respFinal != 'S' && respFinal != 'n' && respFinal != 'N')
                    {
                        printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
                    }
                } while (respFinal != 's' && respFinal != 'S' && respFinal != 'n' && respFinal != 'N');
                break;

            case 3:
                printf("Digite o primeiro numero\n");
                scanf("%f", &num1);
                printf("Digite o segundo numero\n");
                scanf("%f", &num2);
                resultado = num1 * num2;
                if ((int)resultado == resultado && (int)num1 == num1 && (int)num2 == num2)
                {
                    printf("Resultado: %.0f x %.0f = %.0f\n", num1, num2, resultado);
                }
                else
                {
                    printf("Resultado: %.2f x %.2f = %.2f\n", num1, num2, resultado);
                }

                do
                {
                    printf("Deseja realizar outra operacao? (s/n):\n");
                    scanf(" %c", &respFinal);
                    if (respFinal != 's' && respFinal != 'S' && respFinal != 'n' && respFinal != 'N')
                    {
                        printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
                    }
                } while (respFinal != 's' && respFinal != 'S' && respFinal != 'n' && respFinal != 'N');
                break;

            case 4:
                printf("Digite o primeiro numero\n");
                scanf("%f", &num1);

                printf("Digite o segundo numero\n");
                scanf("%f", &num2);

                if (num2 == 0)
                {
                    printf("Erro: Divisao por zero nao e permitida.\n");
                }
                else
                {
                    resultado = num1 / num2;
                    if ((int)resultado == resultado && (int)num1 == num1 && (int)num2 == num2)
                    {
                        printf("Resultado: %.0f / %.0f = %.0f\n", num1, num2, resultado);
                    }
                    else
                    {
                        printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
                    }
                }
                do
                {
                    printf("Deseja realizar outra operacao? (s/n):\n");
                    scanf(" %c", &respFinal);
                    if (respFinal != 's' && respFinal != 'S' && respFinal != 'n' && respFinal != 'N')
                    {
                        printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
                    }
                } while (respFinal != 's' && respFinal != 'S' && respFinal != 'n' && respFinal != 'N');
                break;

            case 5:
                respFinal = 'n';
                return 0;
            }
        }
    } while (respFinal == 's' || respFinal == 'S');
    return 0;
}