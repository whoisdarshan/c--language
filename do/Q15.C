#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n;
   clrscr();
   printf("enter a value");
   scanf("%d",&n);
   i=1;
   while(i<=n)
   {
      if(i%2==0)
      {
       printf("%d",i*i);
      }
      else
      {
	printf("%d",i);
      }
      i++;

   }
   getch();


}