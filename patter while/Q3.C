#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 i=5;
 while(i>=1)
 {
   j=5;
   while(j>=i)
   {
    printf("%d\t",i);
    j--;
   }
   printf("\n");
   i--;
 }
 getch();

}