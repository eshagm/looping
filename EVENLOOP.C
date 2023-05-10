#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n;
	clrscr();
	printf("enter number=");
	scanf("%d",&n);
	while(i<=n)
	{
	  if(n%2==0)
	  {
	     printf("%d\t",n);
	  }
	  n--;
	}
	getch();
}