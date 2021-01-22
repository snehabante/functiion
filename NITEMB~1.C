#include <stdio.h>
#include <conio.h>
int price(int,int);
float dis(int);
void main()
{
	char itnm[50];
	int up,qty,price;
	float dis,netprice;
	clrscr();
	printf("enter the itnm:");
	scanf("%s",&itnm);
	printf("enter the unit price:");
	scanf("%d",&up);
	printf("enter the quantity:");
       scanf("%d",&qty);
       price=up*qty;
       printf("price of item:%d\n",price);
	dis=price*0.05;
       printf("discount:%f\n",dis);
       netprice=price-dis;
       printf("net price:%f\n",netprice);

    getch();
   }
float dis (int price)
{
	int up,qty;
	float dis=0,netprice;

	return dis;
}
int price (int up,int qty)
{
	return up*qty;
}

