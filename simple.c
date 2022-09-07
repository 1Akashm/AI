#include<stdio.h>
#include<conio.h>

int main()
{
	int temp;
	
	printf("Enter the temperature :\n");
	scanf("%d",&temp);
	
	if(temp>=32)
	{
		printf("IT'S hot today");
		while(temp>=32)
		{
			printf("\n\nTurn on the A.C.");
			break;
		}
	}
	
	else
	{
		printf("Turn off A.C. \t \t It's quite cold today");
	}
	
	getch();
	return 0;
	
}
