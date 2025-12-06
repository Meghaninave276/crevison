#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("\n");
    printf("enter b:");
    scanf("%d",&b);
    printf("\n");
    printf("enter c:");
    scanf("%d",&c);
    printf("\n");
    if(a<b)
    {
        if(a<c)
        {
            printf("a is smallest");

        }
        else
        {
            printf("c is smallest");


        }

    }
    else
    {
        if(b<c)
        {
            printf("b is smallest");

        }
        else
        {
            printf("c is smallest");

        }

    }
    return 0;
}