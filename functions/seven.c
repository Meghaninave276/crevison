#include<stdio.h>
float square(float side);
float circle(float rad);
float ract(float a, float b);

int main()
{
    float a=5.0;
    float b=2.3;
    printf("area of ract is:%f",ract(a,b));
    return 0;
   
}

float square(float side)
{
    return side*side;
}

float circle(float rad)
{
    return 3.14 * rad * rad;
}


float ract(float a, float b)
{
    return a*b;
}