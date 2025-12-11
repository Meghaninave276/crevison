//Check if a number is palindrome
#include<stdio.h>
int main()
{
    int original,reversed;
    printf("enter a original num:");
    scanf("%d",&original);
      printf("enter a reversed num:\n");
    scanf("%d",&reversed);
    if(original==reversed)
    {
        printf("num is palidrome");
    }
    else
    {
         printf("num is not palidrome");

    }
    return 0;
}