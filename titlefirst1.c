#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
    char name[100];
    int i=0;
    printf("Enter the name :");
    gets(name);
    while (name[i]!='\0')
    {
        if (name[i]==' ')
        {
            i++;
            printf("%c",name[i+1]);
        }
        i++;
    }
    getch();
}
