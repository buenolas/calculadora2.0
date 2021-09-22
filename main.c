#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    double num1, num2, resultado;
    char op = '0';

    do
    {
        num1 = num2 = resultado = 0;

            printf("\t==========CALCULADORA 2.0==========\n");

        printf("\t\t (1) para somar\n");
        printf("\t\t (2) para subtrair\n");
        printf("\t\t (3) para multiplicar\n");
        printf("\t\t (4) para dividir\n");
        printf("\t\t (0) para sair\n");

    printf("Informe qual a operacao: \n");
    op = getche ();
    printf("\n\n");
    
    if( op != '0')
    {
    
    if ( op == '1'){
        printf("\t\t===SOMA===\n\n");
            printf("\n\tDigite o primeiro numero e pressione \"Enter\":\t>>>");
            scanf("%lf", &num1);
                printf("\tDigite o segundo numero e pressione \"Enter\":\t>>>");
                scanf("%lf", &num2);
                    setbuf(stdin, NULL);
                        resultado = num1 + num2;
                            printf("\n\nResultado da soma eh: \t\t\t>>>%lf<<<\n\n", resultado);
    }
    
    if ( op == '2'){
        printf("\t\t===SUBTRACAO===\n\n");
            printf("\n\tDigite o primeiro numero e pressione \"Enter\":\t>>>");
            scanf("%lf", &num1);
                printf("\tDigite o segundo numero e pressione \"Enter\":\t>>>");
                scanf("%lf", &num2);
                    setbuf(stdin, NULL);
                        resultado = num1 - num2;
                            printf("\n\nResultado da subtracao eh: \t\t\t>>>%lf<<<\n\n", resultado);
    }
    if ( op == '3'){
        printf("\t\t===MULTIPLICACAO===\n\n");
            printf("\n\tDigite o primeiro numero e pressione \"Enter\":\t>>>");
            scanf("%lf", &num1);
                printf("\tDigite o segundo numero e pressione \"Enter\":\t>>>");
                scanf("%lf", &num2);
                    setbuf(stdin, NULL);
                        resultado = num1 * num2;
                            printf("\n\nResultado da multiplicacao eh: \t\t\t>>>%lf<<<\n\n", resultado);
    }
    if ( op == '4'){
        printf("\t\t===DIVISAO===\n\n");
            printf("\n\tDigite o primeiro numero e pressione \"Enter\":\t>>>");
            scanf("%lf", &num1);
                printf("\tDigite o segundo numero e pressione \"Enter\":\t>>>");
                scanf("%lf", &num2);
                    setbuf(stdin, NULL);
                        resultado = num1 / num2;
                            printf("\n\nResultado da divisao eh: \t\t\t>>>%lf<<<\n\n", resultado);
    }
    
    }
    
    system("pause");
    system("cls");

    }while( op != '0' );
    printf("\n\t>>>Obrigado por usar nossa calculadora!<<<\n\n");

    return 0;
}