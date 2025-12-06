#include<stdio.h>
int main()
{
    int age;
    printf("enter a age:");
    scanf("%d",&age);
    if(age >= 18)
    {
        printf("person is adult");


    }
    else if(age > 13 && age < 18)
    {
                printf("person is teenager");

    }
    else
    {
        printf("person is child");

    }
    return 0;
}