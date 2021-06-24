// Denis & Boris simple calculator

#include <stdio.h>

double add(double a, double b){
  return a+b;
}

double sub(double a, double b){
  return a-b;
}

double div(double a, double b){
  return a/b;
}

double mul(double a, double b){
  return a*b;
}

int main()
{
    char opr;

    double x;
    double y;
    double result;

    printf("What do you want to do? (+ - / *) > ");
    scanf("%c", &opr);

    printf("First number: ");
    scanf("%lf", &x);

    printf("Second number: ");
    scanf("%lf", &y);

    switch (opr)
    {
    case '+':

        result = add(x,y);
        printf("%lf + %lf = %lf", x, y, result);

        break;

    case '-':

        result = sub(x,y);
        printf("%lf - %lf = %lf", x, y, result);

        break;

    case '/':

        result = div(x,y);
        printf("%lf / %lf = %lf", x, y, result);

        break;

    case '*':

        result = mul(x,y);
        printf("%lf * %lf = %lf", x, y, result);

        break;

    default:
        printf("task failed successfully");
    }

    return 0;
}