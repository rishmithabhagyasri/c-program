/*check palindromes*/
 #include<stdio.h>
 int main ()
{
	int num,rev=0,rem,temp;
	printf("enter any integer value");
	scanf("%d",&num);
	temp=num;
	while (num!=0)
	{
		rem= num%10;
		rev=rev*10+rem;
		num=num/10;
			}
	if (temp==rev)
	printf("the number is a palindrome %d",temp);
	else
	printf("the number is not a palindrome %d",temp);
	return 0;
}

