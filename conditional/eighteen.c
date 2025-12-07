//Check if a number is multiple of 5 and 11
#include<stdio.h>
int main()
{
    int num;
    printf("enter a num:");
    scanf("%d",&num);
    if(num%2==0 && num%3==0)
    {
        printf("num is divisible by 2 and 3");

    }
    else
    {

        printf("num is not divisible by 2 and 3");
    }
    return 0;
}