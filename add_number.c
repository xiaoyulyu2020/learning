#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;

    printf("input first number: ");
    scanf("%lf", &num1);
    printf("input second number: ");
    scanf("%lf", &num2);

    printf("Answer: %f", num1 + num2);


    return 0;
}
