#include<stdio.h>
int main()
{
    int num,a,b,c;
    printf("enter a 3 digit num");
    scanf("%d",&num);
    a=num%10;
    b=(num/10)%10;
    c=num/100;
    if((a*a*a + b*b*b + c*c*c)==num)
    {
        printf("num is armstrong");
    }
    else
    {
        printf("num is not armstrong");

    }
}