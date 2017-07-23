 #include<stdio.h>
 int main()
 {
  int num,i,c,min,max;
  printf("Enter min range: ");
  scanf("%d",&min);
  printf("Enter max range: ");
  scanf("%d",&max);
  for(num = min;num<=max;num++)
  {
    c = 0;
    for(i=2;i<=num/2;i++)
    {
      if(num%i==0)
      {
        c++;
        break;
       }
     }
     if(c==0 && num!= 1)
     printf("%d ",num);
    }
    return 0;
}
