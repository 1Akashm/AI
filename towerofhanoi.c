#include<stdio.h>
#include<conio.h>

void toh(int,char,char,char);

int main()
{
	int n;
	
	printf("Enter the number of disc :\n");
	scanf("%d",&n);
	
	printf("\nThe sequence of moves involved in TOH are :\n");
	toh(n,'a','b','c');
	
	getch();
	return 0;
}

void toh(int n, char A,char B,char C)
{
	if(n==1)
	{
		printf("\n  Move the disc 1 from %c to %c",A,C);
	}
	
	else
	{
		toh((n-1),A,B,C);
		printf("\n  Move the disc %d from %c to %c",n,A,C);
		toh((n-1),B,C,A);
	}
}
