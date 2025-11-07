/*write a c program to find the max of three numbers using conditional property*/

#include<stdio.h>
int main ()
{
int a,b,c,max;
printf("enter any three integers");
scanf("%d%d%d",&a,&b,&c);
max= a>b? (a>c? a:c) : (b>c? b:c);
printf("max of three numbers %d%d%d id %d,a,b,c,max ");
return 0;
}
