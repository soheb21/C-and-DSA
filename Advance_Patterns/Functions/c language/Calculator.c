#include <stdio.h>
/*
Name : Shaikh Soheb Ahmed
Div :D Rollno : 38  */
int main()
{
    char Operator;
    float a, b, result = 0;

    printf("\n Please Enter an Operator :  ");
    scanf("%c", &Operator);

    printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
    scanf("%f%f", &a, &b);

    switch (Operator)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("\n You have enetered an Invalid Operator ");
    }

    printf("\n The result of %.2f %c %.2f  = %.2f", a, Operator, b, result);

    return 0;
}