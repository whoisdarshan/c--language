#include<stdio.h>
#include<conio.h>
void main()
{
 char i,j,k=65;
 clrscr();
 i=1;
 while(i<=5)
 {
  j=1;
  while(j<=i)
  {
    printf("%c\t",k);
    k++;
    j++;
  }
  printf("\n");
  i++;
 }
 getch();
}