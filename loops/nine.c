//print the sum of first n natural numbers.
#include<stdio.h>
int main()
{

    int i,n,sum=0,j;
    printf("enter a num");
    scanf("%d",&n);
    for(i=1 , j=n; i<=n && j>=1; i++,j--)
    {
        sum=sum+=i;
        printf("%d\n",j);
       


    }
     printf("sum is %d\n",sum);
    //  for(i=n; i>=1; i--)
    //  {
    //     printf("%d \n",i);

    //  }
}
