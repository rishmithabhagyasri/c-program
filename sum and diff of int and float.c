 /* write a c program to perform addition and subtraction of two integers and two real numbers*/
 #include<stdio.h>
 int main()
 {
int num1,num2,add,diff;
float n1,n2,sum,sub;
printf("enter any two integers numbers");
scanf("%d%d",&num1,&num2);
add=num1+num2;
diff=num1-num2;
printf("addition of two integers is %d\n",add);
printf("subtraction of two integers is %d\n",sub);
printf("\n enter any two real values:");
scanf("%f%f",&n1,&n2);
sum=n1+n2;
sub=n1-n2;
printf("sum of 2 real no's is %f",sum);
printf("subtraction of 2 real no's is %f",sub);
return 0;
 }
