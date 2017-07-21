#include<stdio.h>
void main()
{
 int ch;
 printf("\nEnter the character");
 scanf("%d",&ch);
 if((ch>='a'&&ch<='z')||(ch>'A'&&ch<='Z'))
 printf("\n Character is alphabet");
 else
 printf("\n Character is not alphabet");
 }
