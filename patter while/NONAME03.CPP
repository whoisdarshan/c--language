#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k=65,d=1;
 clrscr();
 i=65;
 while(i<=90)
 {
   if(d%2==0)
   {
      printf("%c\t",k+32);
   }
   else
   {
     printf("%c\t",k);

   }
   k++;
   while(j<=i)
   {
   printf("");
   j++;
   }
   printf("\n");
   i++;












 }
 d++;
 getch();



}