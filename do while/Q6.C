#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n;
  clrscr();
  printf("enter a value");
  scanf("%d",&n);
  i=1;
  do
  {
    printf("%d  ",i);
    i+=2;
  }
  while(i<=n);
	getch();

}