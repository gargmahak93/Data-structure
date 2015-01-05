//Implementation of Dynamic Stack
#include<stdio.h>
#include<conio.h>
#include<process.h>
struct stack
{
  int data;
  struct stack *next;
};
struct stack*top=NULL;
void push()
{
  int num;
  struct stack*p;
  printf("\nEnter the number");
  scanf("%d",&num);
  p=(struct stack*)malloc(sizeof(struct stack));
  if(top==NULL)
  {
    p->data=num;
    p->next=NULL;
    top=p;
  }
  else
  {
    p->data=num;
    p->next=top;
    top=p;
  }
  printf("\n %d is pushed",num);
}
void pop()
{
  int num;
  struct stack*temp;
  if(top==NULL)
    printf("\nStack is empty");
  else
  {
    temp=top;
    num=temp->data;
    printf("\n %d is poped",num);
    top=top->next;
    free(temp);
  }
}
void traverse()
{
  struct stack *temp;
  if(top==NULL)
    printf("\nStack is empty");
  else
  {
    temp=top;
    while(temp!=NULL)
    {
      printf("\n %d",temp->data);
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
    printf("\n---------------------------------------------");
    printf("\nEnter:\n1. To Push\n2. To Pop\n3. To Traverse\n4. Quit");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
	push();
	break;
      case 2:
	pop();
	break;
      case 3:
	traverse();
	break;
      case 4:
	exit(0);
      default:
	printf("\n Wrong Selection, try again...");
    }
  }
  getch();
}