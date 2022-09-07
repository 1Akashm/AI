//queue

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
		printf("the enqueued element is %d\n",val);
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
	q.arr=(int*)malloc(q.size*sizeof(int));
	enqueue(&q,40);
	enqueue(&q,17);
	enqueue(&q,55);
	printf("\n\nthe dequeued element is %d\n",dequeue(&q));
	printf("the dequeued element is %d\n",dequeue(&q));
	printf("the dequeued element is %d\n",dequeue(&q));
	


}

