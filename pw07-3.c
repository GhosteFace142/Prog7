//Вариант №18
#include <stdio.h>
#include <math.h>

double bag(double a, double b)
{
    return tan(a * b);
}

int main()
{
    double a, b;
    printf("Введите числа: \n");

    while(scanf("%lf %lf", &a, &b)== 2)
    {
        double result = bag(a, b);
        printf("%.4f\n", result);
    }
    return 0;
}
