#include<stdio.h>
float converttemp(int celcius);
int main()
{
  float far =  converttemp(5);
  printf("far is %f",far);

}
float converttemp(int celcius)
{
    float far=celcius*(1.8)+32;
    return far;

} 