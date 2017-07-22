#include<stdio.h>
void main()
{
 int a,b,c;
 printf("Enter a,b,c");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b&&a>c)
 printf("a is greater then b and c");
 else if(b>a&&b>c)
 printf("b is greater then a and c");
 else if(c>a&&c>b)
 printf("c is greater then a and b");
 }
