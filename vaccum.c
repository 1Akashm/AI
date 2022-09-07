#include<conio.h>
#include<stdio.h>
int main()
{
	int room;
	int l,r;
	printf("Vaccum cleaner. \n");
	printf("The vaccum cleaner is in its initial state. \n"); 
	printf("There is dirt in the room. So, it needs to be cleaned. \n");
	printf("Enter the room number:");
	scanf("%d",&room);
	
	switch(room)
	{
		case 1:
			printf("Check if the roomm is dirty for 1:");
			scanf("%d",&l);
			if (l==0)
			{
				printf("Go to room 2");

			}
			else
			{
				printf("clean the room 1");
			}
			
	    break; 	
		
		case 2:
			
			printf("Check if room is dirty for 2:");
			scanf("%d",&r);
			if (r==0)
			{
				printf("Go to room 1");
			}
			else
			{
				printf("clean the room 2");
			}
	    	break;
			
		default:
		printf("Wait a moment!");
	}
return 0;
}
