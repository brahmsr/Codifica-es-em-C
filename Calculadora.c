#include <stdio.h>

int main () {

    char operador;
    double num1;
    double num2;
    double resultado;

    printf("\n Entre com o tipo de operação (+ - * /): ");
    scanf("%c", &operador);

    printf("informe o primeiro numero: ");
    scanf("%lf", &num1);

    printf("informe o segundo numero: ");
    scanf("%lf", &num2);

    switch (operador) {
        case '+':
            resultado= num1 + num2;
            printf("\no resultado é: %.2lf", resultado);
            break;

        case '-':
            resultado= num1 - num2;
            printf("\no resultado é: %.2lf", resultado);
            break;

        case '*':
            resultado= num1 * num2;
            printf("\no resultado é: %.2lf", resultado);
            break;

        case '/':
            resultado= num1 / num2;
            printf("\no resultado é: %.2lf", resultado);
            break;

        default:
        printf("%c não e valido", operador);
    }
    return 0;
}