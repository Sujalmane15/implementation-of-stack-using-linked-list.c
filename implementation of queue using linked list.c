  #include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
  struct node *front=NULL;
  struct node *rear=NULL;
  
void enqueue();
void dequeue();
void display();
void peek();
void lenght();

int main()
{
		int ch;
	
	printf("PRESS 1 FOR ENQUEUE\n");
	printf("PRESS 2 FOR DEQUEUE\n");
	printf("PRESS 3 FOR DISPLAY\n");
	printf("PRESS 4 FOR PEEK\n");
	printf("PRESS 5 FOR LENGHT OF QUEUE:");
	while(1)
	{
		printf("\n ENTER THE CHOICE:");
		scanf("%d",&ch);
		
		switch(ch)
		{
	        case 1:enqueue();
		        break;
		 case 2:dequeue();
	        	 break;
		 case 3:display(); 
		        break;
	        case 4:peek();
	               break;
	        case 5:lenght();
	               break;
			 
			default:printf("INVALIDE OPTION:");
		}
		
	}
}

void enqueue()
{
	struct node *newnode;
	
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n ENTER THE DATA:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
         
       if(front==NULL && rear==NULL)
       {
          front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	
}
void dequeue()
{
	struct node *temp;
	temp=front;
	
	if(front==NULL)
	{
	 printf("QUEUE IS EMPTY");
	}
	else
	{
		front=front->next;
		printf("DELETE THE ELEMENT:%d",temp->data);
		free(temp);
	}
	
}

void peek()
{
	if(front==NULL && rear==NULL)
	{
	   printf("QUEUE IS EMPTY");
	   return;      	
	}
	else
	{
		printf("\nPEEK THE TOP OF ELEMENT:%d",front->data);
	}
}

void lenght()    
{
 	int cout;
 	struct node *temp;
 	temp=front;
        while(temp!=NULL)
 	{
 	       cout++;
 		temp=temp->next;
       }
	
		 printf("\n LENGHT OF QUEUE:%d",cout);
	
 }
void display()
{
	struct node *temp;
	temp=front;
	if(front==NULL && rear==NULL)
	{
	   printf("QUEUE IS EMPTY");
	   return;      	
	}
	else
	{
		printf("QUEUE ELEMENT:");
	        while(temp!=NULL)
		{
			printf("\n%d",temp->data);
			temp=temp->next;
		}
       }
       
}
