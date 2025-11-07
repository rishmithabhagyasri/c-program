/*writting reverse of the numbers*/
#include<stdio.h>
int main ()
{
	int num,rev,rem;
	printf("enter any integer value");
	scanf("%d",&num);
while(num!=0)
{
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
}
printf("the reverse of the given number is %d",rev);
return 0;
}


