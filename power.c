#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int c=1;n,y=1,x;
 printf("Enter the number");
 scanf("%d",&x);
 printf("Enter its power");
 scanf("%d",&n);
 while(c<=n)
 {
  y=y*x;
  c++;
 }
 printf("%d^%d=%d",x,n,y);
 getch();
} 
