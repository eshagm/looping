#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n;
	clrscr();
	printf("enter number=");
	scanf("%d",&n);
	while(i<=10)
	{
	    printf("%d * %d=%d\n",i,n,i*n);
	    i++;
	}
	getch();
}