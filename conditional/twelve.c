#include<stdio.h>
int main()
{
    char ch;
    printf("enter a char:");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='O' || ch=='I' || ch=='U')
    {
        printf("char is vowel");
    }
    else
    {
         printf("char is consonant");

    }
    return 0;
}