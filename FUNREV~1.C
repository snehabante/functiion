#include <stdio.h>
#include<conio.h>
void revs(int);
void main()
{
	int i,n;
	clrscr();
	printf("enter a no:");
	scanf("%d",&n);
	revs(n);
	getch();
}
void revs(int n)
{
	int i;
	while(n>0)
	{
	n=n*10+n%10;
	n=n/10;
	printf("%d",n%10);
	return n;
	}
}