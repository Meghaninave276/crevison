#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);
    printf("enter c:\n");
    scanf("%d",&c);
    if(a+b+c==180)
    {
          printf("Triangle is valid");

    }
    else
    {
          printf("Triangle is not valid");

    }
    
}