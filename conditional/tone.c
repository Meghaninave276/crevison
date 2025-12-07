#include<stdio.h>
#include<math.h>
int main()
{
    int num,root;
    printf("enter a num");
    scanf("%d",&num);
    root=sqrt(num);
    if(root*root==num)
    {
        printf("Perfect square");
    }
    else
    {
        printf(" not Perfect square");
    }
    return 0;
    

}