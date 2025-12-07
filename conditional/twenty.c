#include<stdio.h>
int main()
{
    int num;
    printf("enter a num:");
    scanf("%d",&num);
    if(num>=100)
    {
        printf("num is 3 digit number");
    }
    else
    {
        printf("num is not 3 digit number");

    }
    return 0;
}