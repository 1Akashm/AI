//simple reflex

#include<stdio.h>
#include<conio.h>

int main()
{
	int temp ;
	printf("Enter the temperature : ");
	scanf("%d",&temp);
	
	if(temp>=32)
	{
		printf("\nIts hot");
		if(temp>=37)
		{
			printf("\nTurn on the AC");
			return;
		}
		if(temp>=33)
		{
			printf("\nTurn on the AC");
			return;
		}
		if(temp>=40)
		{
			printf("\nTurn on the AC");
			return;
		}
		else
		{
			printf("Turnoff the A.c.");
		}
	}
	
		else if(temp<32)
		{
			printf("\nTurn off the AC");
		}

	
}

