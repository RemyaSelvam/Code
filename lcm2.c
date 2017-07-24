#include <stdio.h>
void main()
{
    int N1, N2, LCM, Temp;
 
    printf("Please Enter two integer Values \n");
    scanf("%d %d", &N1, &N2);
    int a = N1;
    int b = N2;
    while (N2 != 0) 
    {
 	    Temp = N2;
 	    N2 = N1 % N2;
 	    N1 = Temp;
    }
    LCM = (a * b) / GCD;
    printf("LCM of %d and %d = %d", a, b, LCM);
    
}
