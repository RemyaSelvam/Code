#include <stdio.h>
int main()
{
   char ch;
   unsigned int long linecount;
   int u;
   linecount=0;
   while((ch=getc(stdin))!=EOF)
   {
     if (ch=='\n') {++linecount;}
   }
   if(linecount>0)
   {
      ++linecount;
   }

   printf( "%lu\n",linecount );
   return 0;
 }
