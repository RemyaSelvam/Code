#include<stdio.h>
void main()
{
 int counter,n;
 printf("Enter the even number");
 scanf("%d",&n);
 printf("Even numbers between 1 to %d",n);
 for(counter=1;counter<=100;counter++)
 {
  if(counter%2==0)
  {
   printf("\n%d",counter);
   }
  }
}
