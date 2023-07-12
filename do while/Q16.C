#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,k=1;
 clrscr();
 printf("enter a value");
 scanf("%d",&n);
 i=1;
 do
 {
   printf("%d",k);
   k*=2;
   i++;

 }
 while(i<=n);
 getch();




}