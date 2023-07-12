#include<stdio.h>
#include<conio.h>
void main()
{
  char i;

  clrscr();
  i=65;
  do
  {
   printf("%c  ",i);
   printf("%c  ",i+32);
    i++;
  }
  while(i<90);
	getch();

}