#include<stdio.h>
#include <string.h>

struct Employee{
    char name[30];
    int age;
};

int main()
{
    struct Employee E;
    strcpy(E.name,"abhishek");
    printf("%s", E.name);
    return 0;
}