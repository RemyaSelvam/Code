#include<stdio.h>
viod main()
{
 int x,y,temp;
 printf("enter the value of x and y:");
 scanf("%d%d",&x,&y);
 printf("Before swapping x=%d,y=%d",x,y);
 temp=x;
 x=y;
 y=temp;
 printf("After swapping x=%d,y=%d",x,y);
}
