//CodeChef Problem : Beginner(ATM)
//Problem Code : HS08TEST
// Author : By PIYUSH.
#include<stdio.h>
int main()
{
	int x;
	float y;
	scanf("%d",&x);
	scanf("%f",&y);
	if(x<=(y-0.5))
	{
		if(x%5==0)
		printf("%.2f",y-x-0.5);
		else
		printf("%.2f",y);
		
	}
	else
	printf("%.2f",y);
	return 0;
}
