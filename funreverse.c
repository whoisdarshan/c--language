#include<stdio.h>
 
char reverse()

{
  	char a[30],i,j;
	

	printf("enter term ");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++);
	for(j=i;j>=0;j--)
	{
		printf("%c",a[j]);
	}
	return a[j];

}
int main()
{
	char a[30];
	int j;
	a[j]= reverse();
}