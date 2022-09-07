//dfs

#include<stdio.h>
#include<stdlib.h>

struct stack 
{
	int top;
	int size;
	int *arr;
};

int isfull(struct stack *s)
{
	if(s->top==s->size-1)
	{
		return 1;
	}
	return 0;
}

int isempty(struct stack *s)
{
	if(s->top==-1)
	{
		return 1;
	}
	return 0;
}

void push(struct stack *s,int val)
{
	if(isfull(s))
	{
		printf("The stack is full");
	}
	else
	{
		s->arr[s->top]=val;
		//printf("the pushed element is %d\n",val);
		s->top++;
	}
}

int pop(struct stack *s )
{
	int a=-1;
	if((isempty(s)))
	{
		printf("the stack is empty");
	}
	else 
	{
		s->top--;
		a=s->arr[s->top];
	}
	return a;
}

	//int visited[7]={0,0,0,0,0,0,0};
/*	int a[7][7]={
		{1,1,1,0,0,0,0},
		{1,1,0,1,1,0,0},
		{1,1,1,0,0,1,0},
		{0,1,0,1,0,0,1},
		{0,1,0,0,1,0,0},
		{0,0,1,0,0,1,0},
		{0,0,0,1,0,0,1}
	};*/


/*void dfs(int i)
{
	printf("%d",i);
	visited[i]=1;
	int j;
	for(j=0;j<7;j++)
	{
		if(a[i][j]==1 && !visited[j])
		{
			dfs(j);
		}
	}
}*/



int main()
{
	struct stack s;
	s.arr=(int*)malloc(s.size*sizeof(int));
	s.size=100;
	s.top=-1;
	int i=5;
	int limit;
	//int node;
	
	int visited[7]={0,0,0,0,0,0,0};
	int a[7][7]={
		{1,1,1,0,0,0,0},
		{1,1,0,1,1,0,0},
		{1,1,1,0,0,1,0},
		{0,1,0,1,0,0,1},
		{0,1,0,0,1,0,0},
		{0,0,1,0,0,1,0},
		{0,0,0,1,0,0,1}
	};
	printf("%d",i);
	visited[i]=1;
	push(&s,i);
	while(!isempty(&s))
	{
		i=pop(&s);
		int j;

		
		for(j=0;j<7;j++)
		{
			
			if(a[i][j]==1 && visited[j]==0 )
			{
				printf("%d",j);
				visited[j]=1;
				push(&s,j);
			}
		}
	}



	
	return 0;
	
}

