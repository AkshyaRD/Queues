/* Queue
To perform Enqueue, Dequeue operations on Queue */

#include <stdio.h>

void enqueue(int);
void dequeue();
void display();

int queue[10];
int front,rear=-1;
int main()
{
	int ch,data;
	do
	{
		printf("\nPerform operations on Queue \n");
		printf("1. Enqueue \n2. Dequeue \n3. Display \n4. End");
		printf("\n\nEnter the choice:");
		scanf("%d",&ch);
		if (ch==1)
		{
			printf("\nEnter the element to be enqueued to the queue: ");
			scanf("%d",&data);
			enqueue(data);
		}
		else if (ch==2)
		{
			dequeue();
		}
		else if (ch==3)
		{
			display();
		}
		else if (ch==4)
		{
			break;
		}
		else 
		{
			printf("Invalid choice");
		}
	}while(ch!=0);
}

void enqueue(int data)
{
	if (rear==9)
	{
		printf("Queue Overflow!");
		
	}
	else
	{
		rear+=1;
		queue[rear]=data;
		printf("Queue Updated!\n");
		if (front==-1)
		{
			front+=1;
		}
	}
}

void dequeue()
{
	if (front==-1)
	{
		printf("Queue Underflow");
	}
	else
	{
		front+=1;
		printf("Element dequeued from Queue\n");
	}
}

void display()
{
	int i;
	for(i=rear;i>=front;i--)
	{
		printf("\n %d",queue[i]);
	}
}
