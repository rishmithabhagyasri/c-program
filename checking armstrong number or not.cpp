/*check whether it is a armstrong number*/
#include<stdio.h>
#include<math.h>
int main ()
{
int num,rem,sum,temp,original,len;
printf(" enter any positive integer");
scanf("%d",&num);      //1234
original=num;          //1234
temp=num;             //1234 
while("num!=0")      //1234     123      12      1    0
{
	rem=num%10;      //4       3          2      1
	len++;           //1       2           3      4
	num=num/10;
}
while (temp!=0)              //1234    123    12     1    0
{
	rem=num%10;              //4       3       2     1
	sum=sum+pow(rem,len);
	num=num/10;
}
if (sum==original)
printf("the given number is armstrong %d",original);
else
printf("the given number is not armsrong %d",original);
return 0;
}
	
