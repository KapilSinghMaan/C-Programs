// Function Prototype in C

#include <stdio.h>
void hello(char[], int);
int main()
{
    char name[] = "Bro";
    int age = 21;
    hello(name, age);
    return 0;
}
void hello(char name[], int age)
{
    printf("Hello, %s", name);
    printf("\nYou are %d years old", age);
}