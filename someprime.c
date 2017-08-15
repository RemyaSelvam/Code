#include<stdio.h>
int main()
{
int i, num1, num2, j;
int div = 0;
scanf("%d %d", &num1, &num2);
for(i=num1; i<=num2; i++)
  {
    for(j=1; j<=i; j++)
    {
      if(i%j == 0)
      {
        div++;
      }
    }
    if(div == 2)
    {
     printf("%d\n", i);
    }
    div = 0;
  }
  return 0;
}
