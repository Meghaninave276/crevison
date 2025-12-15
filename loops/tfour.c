#include<stdio.h>
 int main()
 {
    int n, count=0;
    printf("enter a n:");
    scanf("%d",&n);
    if(n==0)
    {
        count=1;

    }
    else
    {
        if(n<0)
        {
            n=-n;

        }
        while(n>0)
        {
            n=n/10;
            count++;
        }
    }

    printf("num of digits is %d\n",count);
    return 0;

 }