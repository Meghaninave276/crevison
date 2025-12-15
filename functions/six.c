#include<stdio.h>
void calcprice( float value);

 int main()
 {
    float value=100;
    calcprice(value);
     printf(" price is %f\n",value);


 }

 void calcprice(float value)
 {
    value=value+(0.18*value);
    printf("final price is %f\n",value);
 }