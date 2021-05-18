#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    double b;
    printf("enter first number: ");
    scanf("%lf", &a);
    printf("enter second number: ");
    scanf("%lf", &b);

    printf("Total is %f", a + b);
    return 0;
}
