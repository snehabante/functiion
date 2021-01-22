#include<stdio.h>
#include<conio.h>
int star(int);
void main()
{
int n;
clrscr();
star(n);
getch();
}
int star(int n)
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("  * ");
}
printf("\n");
}
for(i=1;i<=5;i++)
{
for(j=5;j>=i;j--)
{
printf("  * ");
}
printf("\n");
}

return n;

}
