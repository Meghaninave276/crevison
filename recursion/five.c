#include<stdio.h>
int studemarks(int science, int maths, int sanskrit);

int main()
{
    int sc=98;
    int maths=99;
    int sanskrit=92;
    printf("per is %d",studemarks(sc,maths,sanskrit));

}

int studemarks(int science, int maths, int sanskrit)
{
    return((science + maths + sanskrit)/3)*100;

}