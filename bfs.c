//bfs
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct queue
{
	int f,r;
	int size;
	int *arr;
};

int isfull(struct queue *q)
{
	if(q->r==q->size-1)
	{
		return 1;
	}
	return 0;
}

int isempty(struct queue *q)
{
	if(q->r==q->f)
	{
		return 1;
	
	}
	return 0;
}

void enqueue(struct queue *q,int val)
{
	if(isfull(q))
	{
		printf("The queue is full");
	}
	else
	{
		q->r++;
		q->arr[q->r]=val;
		//printf("the enqueued element is %d\n",val);
	}
}

int dequeue(struct queue *q)
{
	int a=-1;
	if(isempty(q))
	{
		printf("the queue is empty");
	}
	else
	{
		q->f++;
		a=q->arr[q->f];
	
	}
	return a;
}

int main()
{
	struct queue q;
	q.size = 50;
	q.r=q.f=0;
	q.arr=(int*)malloc(q.size*sizeof(int));
	int node;
	int i=6;
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
	//int visited[5]={0,0,0,0,0};
	/*int a[5][5]={
		{1,1,1,0,0},
		{1,1,0,1,0},
		{1,0,1,1,0},
		{0,1,1,1,1},
		{0,0,1,1,1}
	};*/
	printf("%d",i);
	visited[i]=1;
	enqueue(&q, i);
	while(!isempty(&q))
	{
		int node = dequeue(&q);
		int j;
		for(j=0;j<7;j++)
		{
			if(a[node][j]==1 && visited[j]==0)
			{
				printf("%d",j);
				visited[j]=1;
				enqueue(&q,j);
			}		
		
		}
	}
}

