//Check if a person is eligible to vote (age ≥ 18)
#include<stdio.h>
int main()
{
    int age;
     printf("enter a age:");
    scanf("%d",&age);
    if(age>18)
    {
        printf("eligible to vote");

    }
    else
    {
        printf("not eligible to vote");

    }
    return 0;
}