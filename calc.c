#include <stdio.h>
int soma(int a, int b)
{
    return (a + b);
}
int sub(int a, int b)
{
    return (a - b);
}
int multi(int a, int b)
{
    return (a * b);
}
int div(int a, int b)
{
    return (a / b);
}
int calc()
{
    int num2;
    int num1;
    char calc;
    printf("1 Soma\n2 subtração\n3 multiplicação\n4 divisão\nQual conta você quer fazer: ");
    scanf("%d", &calc);
    if(calc == 1)
    {
        printf("Digite um numero: ");
        scanf("%d", &num1);
        printf("Digite outro numero: ");
        scanf("%d", &num2);
        printf("Soma desses dois numeros: %d", soma(num1, num2));
    }
    if(calc == 2)
    {
        printf("Digite um numero: ");
        scanf("%d", &num1);
        printf("Digite outro numero: ");
        scanf("%d", &num2);
        printf("Subtração desses dois numeros: %d", sub(num1, num2));
    }
    
    if(calc == 3)
    {
        printf("Digite um numero: ");
        scanf("%d", &num1);
        printf("Digite outro numero: ");
        scanf("%d", &num2);
        printf("Multiplicação desses dois numeros: %d", multi(num1, num2));
    }
    if(calc == 4)
    {
        printf("Digite um numero: ");
        scanf("%d", &num1);
        printf("Digite outro numero: ");
        scanf("%d", &num2);
        printf("Divisão desses dois numeros: %d", div(num1, num2));
    }
}
int main()
{
    calc();
}
