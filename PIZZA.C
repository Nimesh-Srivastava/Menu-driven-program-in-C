#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>

int main()
{
	int top[10],ans,cat,i=0,j=0,add[10],base;
	char a='y',b='y',c='y',line1[100],line2[100],line3[100],conf;
	clrscr();
	printf("\n\tWelcome to pizza point");
	printf("\n\n\tPress any key to start customizing your pizza : ");
	getch();
	clrscr();
	printf("\n\tPizza Point Menu");
	printf("\n\n\tSelect category : ");
	printf("\n\n\t1)Vegetarian\t\t2)Non-vegetarian");
	printf("\n\n\tOption : ");
	scanf("%d",&cat);
	printf("\n\n\tSelect Base : ");
	printf("\n\n\t1)Thin Crust\t2)Fresh Pan\n\n\t3)Cheese Burst");
	printf("\n\n\tOptions :");
	scanf("%d",&base);
	while(b=='y')
	{
		printf("\n\n\tSelect toppings : ");
		printf("\n\n\t1)Jalapeno\t2)Olives\n\n\t3)Onions\t4)Mushrooms");
		printf("\n\n\tOptions : ");
		scanf("%d",&top[i]);
		i++;
		printf("\n\tWant to add more(y/n) : ");
		scanf("%s",&b);
	}
	while(c=='y')
	{
		printf("\n\n\tSelect Addons : ");
		printf("\n\n\t1)Oregano\t2)Chilli Flakes\n\n\t3)Extra Cheese\t4)Extra Meat/Veggies");
		printf("\n\n\tOptions :");
		scanf("%d",&add[j]);
		j++;
		printf("\n\tWant to add more(y/n) : ");
		scanf("%s",&c);
	}
	//Address
	clrscr();
	printf("\n\tPizza Point Delivery System");
	printf("\n\n\tEnter address :-");
	gets(line1);
	printf("\n\n\tEnter Street : ");
	gets(line2);
	printf("\n\n\tEnter Locality : ");
	gets(line3);
	if(strlen(line3)<=10)
	{
		printf("\n\n\tIt is going to take approximately 20 mins");
		printf("\n\tto deliver your pizza");
	}
	else
	{
		printf("\n\n\tIt is going to take approximately 30 mins");
		printf("\n\tto deliver your pizza");
	}
	sleep(3);
	clrscr();
	printf("\n\tPizza Point Delivery System");
	printf("\n\n\tYour pizza is being prepared");
	sleep(5);
	clrscr();
	printf("\n\tPizza Point Delivery System");
	printf("\n\n\tWe are assigning a delivery executive");
	sleep(5);
	clrscr();
	printf("\n\tPizza Point Delivery System");
	printf("\n\n\tYour pizza is out for delivery");
	printf("\n\n\tPlease enter 'y'when your order has been delivered.");
	printf("\n\tIf not, press 'n' : ");
	scanf("%s",&conf);
	if(conf=='y')
	{
		printf("\n\n\tThank you for using Pizza Point. Hope\n\tyou have a great day");
	}
	else
	{
		printf("\n\n\tThis is our executive number : 1234567890, please contact\n\thim. If there are any further problems please\n\tcontact our customer care.");
	}
	getch();
	return 0;
}


