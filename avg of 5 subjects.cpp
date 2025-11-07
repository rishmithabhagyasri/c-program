/*write  a c program to find the average of five subjects marks*/
#include<stdio.h>
int main ()
{
int a,b,c,d,e;
float avg;
printf("enter the five subjects marks");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
avg=(a+b+c+d+e)/5.0;
printf("the average is %f",avg);
return 0;
}
