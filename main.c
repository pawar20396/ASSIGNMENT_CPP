#include<stdio.h>

struct date
{
	int d,m,y;
};
struct date d;

int menu_list()
{
	int choice;
	printf("1: Initiate Date\n 2:Accept Date \n 3:Print Date \n");
	printf("\n enter your choice\n");
	scanf("%d",&choice);
	return choice;
}

void InitDate(struct date* ptdate)
{
d.d=03;
d.m=03;
d.y=2020;
}
/*
void AcceptDateFromConsole(struct date* ptdate)
{

	printf("\n");
	printf("\nEnter date\n");
	scanf("%d %d %d",&d.d,&d.m,&d.y);

}*/

int AcceptDateFromConsole(struct date* ptdate)
{

	printf("\n");
	printf("\nEnter date\n");
	scanf("%d",&d.d);
	{
	if(d.d>31 || d.d<0)
		printf("\n Invalid date \n");
	return 0;
}
	scanf("%d",&d.m);
	if(d.m>12 || d.m<0)
	{
	printf("\n Invalid date \n");
	return 0;
	}
	scanf("%d",&d.y);
}



void PrintDateOnConsole(struct date* ptdate)
{/*
	if(d.d>31 || d.d<0)
		printf("\n Invalid date \n");
	if(d.m>12 || d.m<0)
		printf("\n Invalid date \n");
	else*/
	printf("\nDate : %d/%d/%d\n",d.d,d.m,d.y);
}





int main(void)
{
	struct date* ptdate=0;
	int choice,a;
	while( ( choice = menu_list( ) ) != 0 )
		switch(choice)
		{
		case 1:
			InitDate(ptdate);
		break;

		case 2:
			a=AcceptDateFromConsole(ptdate);
			if(a==0)
				printf("Invalid date");
		break;

		case 3:
			PrintDateOnConsole(ptdate);
		break;
		}

	return 0;
}
