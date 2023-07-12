#include<stdio.h>
#include<conio.h>
void main()
{
  int i,k=0,n;
  clrscr();
  printf("enter the value");
  scanf("%d",&n);
  i=1;
  while(i<=n)
  {
    printf("%d  \n",i);
    k=k+i;
    i++;


  }
    printf("sum is %d",k);
  getch();



}