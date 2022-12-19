#include<stdio.h>
#include<stdlib.h>
int *que,size,rear=-1,front=-1;
void enque(int val)
{
	if(front==0 && rear==size-1 || rear==front+1)
	{
		printf("over flow");
	}
	else if(front==-1 && rear==-1)
	{
		rear=(rear+1)%size;
		que[rear]=val;
		front=0;
	}
	else
	{
		rear=(rear+1)%size;
		que[rear]=val;
	}
}
int deque()
{
	int val;
	if(front==-1 && rear==-1)
	{
		return -1;
	}
	else if(front==rear)
	{
		val=que[front];
		front=-1;
		rear=-1;
	}
	else
	{
		val=que[front];
		front=(front+1)%size;
	}
	return val;
}
void display()
{
	int i,j;
	if(front==-1 && rear==-1)
	{
		printf("under flow");
	}
	else
	{
		i=front;
		j=rear;
		while(1)
		{
			printf("%d",que[i]);
			i=(i+1)%size;
		}
		printf("%d\n",que[j]);
	}

}
void main()
{
	int i,ch,val;
	scanf("%d",&size);
	que=(int*)calloc(size,sizeof(int));
	while(1)
	{
     	printf("1.enque 2.deque 3.display 4.exit:");
		scanf("%d",&ch);
		if(ch==1)
		{
			scanf("%d",&val);
			enque(val);
		}
		else if(ch==2)
		{
			val=deque();
			if(val!=1)
			{
				printf("%d\n",val);
			}
			else
			{
				printf("under flow");
			}
		}
		else if(ch==3)
		{
			display();
			
		}
		else
		{
			break;
		}
		
    }
}
