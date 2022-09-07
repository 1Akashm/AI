//stack

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
		printf("the stack is empty ");
	}
	else
	{
		s->arr[s->top]=val;
		printf("the pushed element is %d\n",val);
		s->top++;
	}
}

int pop(struct stack *s)
{
	int a=-1;
	if(isempty(s))
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


int main()
{
	struct stack s;
	s.arr=(int*)malloc(s.size*sizeof(int));
	push(&s,30);
	push(&s,50);
	printf("the poped element is %d\n",pop(&s));
	printf("the poped element is %d\n",pop(&s));
	
}

