//Implementation of Dynamic Queue
#include<stdio.h>
#include<conio.h>
#include<process.h>
struct queue
{
  int data;
  struct queue*next;
};
struct queue*front=NULL;
struct queue*rear=NULL;
void add()
{
  int num;
  struct queue*p;
  printf("\nEnter Number");
  scanf("%d",&num);
  p=(struct queue*)malloc(sizeof(struct queue));
  if(front==NULL&&rear==NULL)
  {
    p->data=num;
    p->next=NULL;
    front=p;
    rear=p;
  }
  else
  {
    p->data=num;
    rear->next=p;
    p->next=NULL;
    rear=p;
  }
  printf("\n%d is added in queue",num);
}
void del()
{
  struct queue*temp;
  if(front==NULL&&rear==NULL)
    printf("\nQueue is empty");
  else
  {
    int num;
    temp=front;
    num=temp->data;
    printf("\n%d is removed from queue",num);
    front=front->next;
    free(temp);
  }
}
void traverse()
{
  struct queue*temp;
  if(front==NULL&&rear==NULL)
    printf("\nQueue is empty");
  else
  {
    temp=front;
    while(temp!=NULL)
    {
      printf("\n %d", temp->data);
      temp=temp->next;
    }
  }
}
void main()
{
  int ch;
  clrscr();
  while(1)
  {
    printf("\n--------------------------------");
    printf("\nEnter:\n1. To add\n2. To remove\n3. To traverse\n4. exit");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
	add();
	break;
      case 2:
	del();
	break;
      case 3:
	traverse();
	break;
      case 4:
	exit(0);
      default:
	printf("\nInvalid Choise");
    }
  }
  getch();
}