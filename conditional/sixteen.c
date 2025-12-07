//Check if a number is multiple of 5 and 11
#include<stdio.h>
int main()
{
    int num;
    printf("enter a num:");
    scanf("%d",&num);
    if(num%5==0 && num%11==0)
    {
        printf("num is multiple of 5 and 11");

    }
    else
    {

        printf("num is not multiple of 5 and 11");
    }
}