#include<stdio.h>
int main ()
{
int num,sum,rem;
printf("enter any positive integer");
scanf("%d",&num);
while (num!=0)
{
	rem=num%10;
	sum=sum*10+rem;
	num=num/10;
}
printf("the sum of the digits of the given number is %d",sum);
	return 0;
}




