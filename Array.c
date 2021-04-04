#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[] = {4, 7, 55, 44};
    printf("%d\n", numbers[1]);

    numbers[1] = 200;
    printf("%d\n", numbers[1]);
    //create new empty array
    int numbernew[10];//has to sign amount of numbers you want to put into
// if sign the index [1], and print index[0], C will NOT!!! recognize index [1] as [0]
    char name[20] = "chris";//string is array of charactors, WTF!
    printf("%s", name);
    return 0;
}
