#include<stdio.h>
void phw(int count);
int main()
{
    phw(2);
    return 0;
}


void phw(int count)

{
    if(count==0)
    {
        return;

    }
    printf("hello world!\n");
    phw(count-1);
}