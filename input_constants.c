#include <stdio.h>
#include <stdlib.h>

int main()
{
//constants
    //const int NUM = 5;
    //printf("%d", NUM);
    //NUM = 8; //error, NUM can't be modified anymore
    //printf("%d", NUM);

//input
    //int age;
    //printf("Please enter your age: ");
    //scanf("%d", &age);//& is a pointer
    //printf("you are %d years old\n", age);

    //double gpa;
    //printf("please enter gpa: ");
    //scanf("%lf", &gpa);// %lf only use input
    //printf("gpa enter is %f\n", gpa);

    char grade;
    printf("enter your grade: ");
    scanf("%c", &grade);
    printf("your grade is %c\n", grade);

    char name[20];
    //or name[] = "something"
    // In this case you have to let c how big it is the string
    printf("enter your name: ");
    scanf("%s", name);// don't need pointer
    printf("your name is %s", name);
//Problem use scanf
//try type Chris lyu, It only print Chris. So scanf only detect the letter before space.
    //Try
    printf("enter again: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);
    //BUT, It create a newline charactor


    return 0;
}
