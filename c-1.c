#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myname[] = "Chris";
    int age = 30;
    printf("Hello world! I am %s\n", myname);
    printf("I am %d\n", age);
    printf("My favorite %s is %d and %f", "number", 6000, 3.1415);

    int favNum = 90;
    char singlechar = 'X';
    printf("My favorite %s is %d and %f\n", "number", favNum, 3.1415);
    printf("I like character %c\n", singlechar);

    printf("%f\n", 5 + 4.5);
// Not following not working
    printf("%f\n", 5 / 3);
    printf("%f\n", 5 / 3.0);//correct

    //some function you can use
    printf("%f\n", pow(2, 3));
    printf("%f\n", sqrt(36));
    printf("%f\n", ceil(32.5));
    printf("%f\n", floor(2.3));
    return 0;
}
