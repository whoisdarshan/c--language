#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n;
  clrscr();
  printf("enter a value");
  scanf("%d",&n);
  i=0;
  while(i<=n)
  {
    printf("%d  ",i);
    i+=2;
  }

	getch();

}