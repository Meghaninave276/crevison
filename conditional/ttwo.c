/*Check if a number is perfect number
    → sum of proper divisors = number*/ 

    #include<stdio.h>
    int main()
    {
        int num,sum=0;
        printf("enter a num");
        scanf("%d",&num);
        sum=0;
        if(num>1 && num%1==0)sum+=1;
        if(num>2 && num%2==0)sum+=2;
        if(num>3 && num%3==0)sum+=3;
        if(num>4 && num%4==0)sum+=4;
        if(num>5 && num%5==0)sum+=5;
        if(num>6 && num%6==0)sum+=6;
        if(num>7 && num%7==0)sum+=7;
        if(num>8 && num%8==0)sum+=8;
        if(num>9 && num%9==0)sum+=9;
        if(num>10 && num%10==0)sum+=10;
        if(sum==num)
        {
            printf("num is perfrct %d",num);
        }

        else
        {
            printf("num is not perfrct %d",num);

        }
        return 0;

    }