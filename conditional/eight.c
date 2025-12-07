#include<stdio.h>
int main()
{
    int marks;
    printf("enter a marks");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100)
    {
        printf("grade A++");

    }
    else if(marks>=70 && marks<=90)
    {
         printf("grade A");

    }
    else if(marks>=30 && marks<=70)
    {
         printf("grade B");

    }
    else if(marks>=30 && marks<=70)
    {
         printf("grade B");

    }
    else if(marks>100 )
    {
         printf("enter marks between (1-100)");

    }

    else
    {
        printf("grade C");
    }
    return 0;
}