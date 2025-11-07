/*convert fahrenheit to celsius and vice verse*/
#include<stdio.h>
int main()
{
float fah,cel;
printf("enter fahreheit temperature");
scanf("%f",&fah);
cel=(fah-32.0)*(5.0/9.0);
printf("fahrenheit to celsius is %f\n",cel);
printf("enter celsius temperature");
scanf("%f",&cel);
fah=cel*(9.0/5.0)+32;
printf("celcius to faahrenheit is %f",fah);
return 0;
}
