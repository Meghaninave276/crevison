#include<stdio.h>
int main()
{
    char ch;
    printf("enter a char:");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("letter is uppercase");

    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("letter is lowercase");
    }
    else
    {
        printf("letter is not uppercase or lowercase");

    }
    return 0;
}