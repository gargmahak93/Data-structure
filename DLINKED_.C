//Implementation of Doubly Linked List
#include<stdio.h>
#include<conio.h>
#include<process.h>
struct dlist
{
  int data;
  struct dlist*lptr;
  struct dlist*rptr;
};
struct dlist*start=NULL;
void create()
{
  int num;
  struct dlist*p,*temp;
  printf("\nEnter the number:");
  scanf("%d",&num);
  p=(struct dlist*)malloc(sizeof(struct dlist));
  if(start==NULL)
  {
    p->data=num;
    p->lptr=NULL;
    p->rptr=NULL;
    start=p;
  }
  else
  {
    temp=start;
    while(temp->rptr!=NULL)
    {
      temp=temp->rptr;
    }
    p->data=num;
    p->rptr=NULL;
    temp->rptr=p;
    p->lptr=temp;
  }
  printf("\n%d is added in list",num);
}
void insert_at_start()
{
  int num;
  struct dlist*p;
  if(start!=NULL)
  {
    printf("\nEnter the number:");
    scanf("%d",&num);
    p=(struct dlist*)malloc(sizeof(struct dlist));
    p->data=num;
    p->rptr=start;
    p->lptr=NULL;
    start->lptr=p;
    start=p;
    printf("\n%d is added in the list",num);
  }
  else
  {
    printf("\nList is empty");
  }
}
void insert_at_end()
{
  int num;
  struct dlist*p,*temp;
  if(start!=NULL)
  {
    temp=start;
    while(temp->rptr!=NULL)
    {
      temp=temp->rptr;
    }
    printf("\nEnter the number:");
    scanf("%d",&num);
    p=(struct dlist*)malloc(sizeof(struct dlist));
    p->data=num;
    p->rptr=NULL;
    p->lptr=temp;
    temp->rptr=p;
    printf("\n%d is added in list",num);
  }
  else
  {
    printf("\nList is empty");
  }
}
void insert_at_position()
{
  int num,pos,count=0,i=0;
  struct dlist*p,*temp,*temp1;
  if(start!=NULL)
  {
    printf("\nEnter Position:");
    scanf("%d",&pos);
    temp=start;
    while(temp->rptr!=NULL)
    {
      count=count+1;
      temp=temp->rptr;
    }
    if(pos>count||pos<1)
    {
      printf("\nInvalid Position");
    }
    else
    {
      temp=start;
      while(i<pos-1)
      {
	i++;
	temp=temp->rptr;
      }
      printf("\nEnter Number");
      scanf("%d",&num);
      p=(struct dlist*)malloc(sizeof(struct dlist));
      p->data=num;
      temp1=temp->rptr;
      p->rptr=temp1;
      temp1->lptr=p;
      temp->rptr=p;
      p->lptr=temp;
      printf("%d is added in list",num);
    }
  }
  else
  {
    printf("\nList is empty");
  }
}
void delete_at_start()
{
  struct dlist*temp;
  if(start!=NULL)
  {
    temp=start;
    start=temp->rptr;
    start->lptr=NULL;
    printf("%d is deleted",temp->data);
    free(temp);
  }
  else
  {
    printf("\nList is empty");
  }
}
void delete_at_end()
{
  struct dlist*temp,*temp1;
  if(start!=NULL)
  {
    temp=start;
    while(temp->rptr!=NULL)
    {
      temp1=temp;
      temp=temp->rptr;
    }
    temp1->rptr=NULL;
    printf("%d is deleted", temp->data);
    free(temp);
  }
  else
  {
    printf("\nList is empty");
  }
}
void delete_at_position()
{
  int pos,count=0,i=0;
  struct dlist*temp,*temp1,*temp2;
  if(start!=NULL)
  {
    printf("\nEnter Position:");
    scanf("%d",&pos);
    temp=start;
    while(temp->rptr!=NULL)
    {
      count=count+1;
      temp=temp->rptr;
    }
    if(pos>count||pos<1)
    {
      printf("\nInvalid Position");
    }
    else
    {
      temp=start;
      while(i<pos-1)
      {
	i++;
	temp=temp->rptr;
      }
      temp1=temp->rptr;
      temp2=temp1->rptr;
      temp->rptr=temp2;
      temp2->lptr=temp;
      printf("\n%d is deleted", temp1->data);
      free(temp1);
    }
  }
  else
  {
    printf("\nlist is empty");
  }
}
void display()
{
  struct dlist*temp,*temp1;
  int n;
  printf("\nEnter:\n1. To display from start to end\n2. To display from end to start");
  scanf("%d",&n);
  if(n==1)
  {
    temp=start;
    while(temp->rptr!=NULL)
    {
      printf("\t%d",temp->data);
      temp=temp->rptr;
    }
    printf("\t%d",temp->data);
  }
  if(n==2)
  {
    temp=start;
    while(temp->rptr!=NULL)
    {
      temp=temp->rptr;
    }
    temp1=temp;
    while(temp1->lptr!=NULL)
    {
      printf("\n\t%d",temp1->data);
      temp1=temp1->lptr;
    }
    printf("\n\t%d",temp1->data);
  }
}
void main()
{
  int ch;
  clrscr();
  while(1)
  {
    printf("\nEnter:\n1. To create\n2. To insert at start\n3. To insert at end\n4. To insert at position");
    printf("\n5. To delete at start\n6. To delete at end\n7. To delete at position\n8. To display\n9. Quit");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
	create();
	break;
      case 2:
	insert_at_start();
	break;
      case 3:
	insert_at_end();
	break;
      case 4:
	insert_at_position();
	break;
      case 5:
	delete_at_start();
	break;
      case 6:
	delete_at_end();
	break;
      case 7:
	delete_at_position();
	break;
      case 8:
	display();
	break;
      case 9:
	exit(0);
      default:
	printf("\nInvalid Choise");
    }
  }
  getch();
}