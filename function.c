#include <stdio.h>
#include <stdlib.h>

int main()
{
    SayHi("Mike", 143);
    return 0;
}
//function
void SayHi(char name[], int age){
    printf("Hello user, %s, you are %d", name, age);

}
