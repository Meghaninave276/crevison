//Simple calculator using switch-case (+, −, ×, ÷)
#include<stdio.h>
int main()
{
    int a,b;
    char op;
     printf("enter a:\n");
    scanf("%d", &a);

    printf("enter op (+,-,*,/):\n");
    scanf(" %c", &op); 

    printf("enter b:\n");
    scanf("%d", &b);
    
    switch(op)
    {
        case '+':printf("sum is %d",a+b);
        break;
        case '-':printf("sub is %d",a-b);
        break;
        case '*':printf("sub is %d",a*b);
        break;
        case '/':printf("sub is %d",a/b);
        break;
        default:printf("invalid");

    }
    return 0;
}