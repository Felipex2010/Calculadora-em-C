#include <stdio.h>
#include <stdlib.h>

int main()
{
    char respFinal;
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
            scanf("%d", &caso);
            if (caso > 0 && caso < 6)
            {
                switch (caso)
                {
                case 1:
                    printf("Digite o primeiro numero\n");
                    scanf("%f", &num1);
                    printf("Digite o segundo numero\n");
                    scanf("%f", &num2);
                    resultado = num1 + num2;
                    if ((int)resultado == resultado)
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
                    if ((int)resultado == resultado)
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
                    if ((int)resultado == resultado)
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
                    do
                    {
                        printf("Digite o segundo numero\n");
                        scanf("%f", &num2);
                        if (num2 == 0)
                        {
                            printf("Erro: Divisao por zero nao e permitida.\n");
                        }
                    } while (num2 == 0);
                    resultado = num1 / num2;
                    if ((int)resultado == resultado)
                    {
                        printf("Resultado: %.0f / %.0f = %.0f\n", num1, num2, resultado);
                    }
                    else
                    {
                        printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
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
                    break;
                }
            }
            else
            {
                printf("Numero Invalido, tente novamente!\n");
            }
        }
    } while (respFinal == 's' || respFinal == 'S');
    if (respFinal == 'n' || respFinal == 'N')
    {
        printf("Obrigado por usar a calculadora! Ate a proxima.");
    }
    return 0;
}