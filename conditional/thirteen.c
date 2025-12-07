#include<stdio.h>
int main()
{
    char ch;
     printf("enter a char:");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    {
         printf("digit");

    }
    else if((ch >= 'A' && ch <= 'Z')|| (ch >= 'a' && ch <= 'z'))
    {
        printf("letter");

    }
    else
    {
        printf("special character");
    }
    return 0;


}