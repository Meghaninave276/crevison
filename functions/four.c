#include<stdio.h>
int sum(int a, int b);
 int main()
 {
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("\n");
    printf("enter b:");
    scanf("%d",&b);
    printf("\n");
    int s=sum(a,b);
    printf("sum is: %d",s);


 }
 int sum(int a, int b)
 {
     return a+b;

 }