#include<stdio.h>
void main()
{
 int number,i,sum=0;
 printf("Enter any integer");
 scanf("%d",&number);
 for(i=1;i<=number;i++)
 {
 sum=sum+i;
 }
 printf("sum of natural numbers=%d",sum);
 }
