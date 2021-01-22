#include <stdio.h>
#include <conio.h>
int digi(int);
void main()
{
	int n,ds=0;
	clrscr();
	printf("enter the no:");
	scanf("%d",&n);
	digi(n);
	getch();
}
int digi(int a)
{
	int ds=0,n;
	while (n>0)
	{
		ds+=(n%10);
			n/=10;
	    printf("digital sum :%d\n",ds);
	}
	return ds;

}