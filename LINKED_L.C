//Implementation Of Linked List
#include<stdio.h>
#include<conio.h>
struct slist
{
  int data;
  struct slist*next;
};
struct slist*start=NULL;
void create()
{
  int num;
  struct slist*p,*temp;
  printf("\nEnter the number:");
  scanf("%d",&num);
  p=(struct slist*)malloc(sizeof(struct slist));
  if(start==NULL)
  {
    p->data=num;
    p->next=NULL;
    start=p;
  }
  else
  {
    temp=start;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    p->data=num;
    p->next=NULL;
    temp->next=p;
  }
  printf("\n%d is added in linked list", num);
}
void insert_at_start()
{
  int num;
  struct slist*p;
  if(start!=NULL)
  {
    printf("\nEnter the number:");
    scanf("%d",&num);
    p=(struct slist*)malloc(sizeof(struct slist));
    p->data=num;
    p->next=start;
    start=p;
  }
  else
  {
    printf("\nList is empty");
  }
}
void insert_at_end()
{
  int num;
  struct slist*p,*temp;
  if(start!=NULL)
  {
    printf("\nEnter the number:");
    scanf("%d",&num);
    p=(struct slist*)malloc(sizeof(struct slist));
    temp=start;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    p->data=num;
    p->next=NULL;
    temp->next=p;
    printf("\n%d is added in list", num);
  }
  else
  {
    printf("\nList is empty");
  }
}
void insert_at_position()
{
  int num,pos,count=0,i;
  struct slist*p,*temp,*temp1;
  printf("\nEnter Position");
  scanf("%d",&pos);
  temp=start;
  while(temp!=NULL)
  {
    count=count+1;
    temp=temp->next;
  }
  if(count<pos||pos<1)
  {
    printf("\nInvalid Position");
  }
  else
  {
    temp=start;
    while(i<pos-1)
    {
      temp=temp->next;
      i++;
    }
    p=(struct slist*)malloc(sizeof(struct slist));
    printf("\nEnter number");
    scanf("%d",&num);
    p->data=num;
    p->next=temp->next;
    temp->next=p;
    printf("\n%d is added at %d position",num,pos);
  }
}
void delete_at_start()
{
  struct slist*temp;
  if(start!=NULL)
  {
    temp=start;
    start=temp->next;
    printf("\n%d is deleted", temp->data);
    free(temp);
  }
  else
  {
    printf("\nList is empty");
  }
}
void delete_at_end()
{
  struct slist*temp,*temp1;
  if(start!=NULL)
  {
    temp=start;
    while(temp->next!=NULL)
    {
      temp1=temp;
      temp=temp->next;
    }
    temp1->next=NULL;
    printf("\n%d is deleted",temp->data);
    free(temp);
    temp->next=NULL;
  }
  else
  {
    printf("\nList is Empty");
  }
}
void delete_at_position()
{
  int num,pos,count=0,i;
  struct slist*temp, *temp1;
  printf("\nEnter Position");
  scanf("%d",&pos);
  temp=start;
  while(temp!=NULL)
  {
    count=count+1;
    temp=temp->next;
  }
  if(count>pos||count<1)
  {
    printf("\nInvalid Position");
  }
  else
  {
    temp=start;
    while(i<pos-1)
    {
      temp=temp->next;
      i++;
    }
    temp1=temp->next;
    temp->next=temp1->next;
    printf("\n%d is deleted",temp1->data);
    free(temp1);
  }
}
void display()
{
  struct slist*temp;
  if(start!=NULL)
  {
    temp=start;
    while(temp->next!=NULL)
    {
      printf("\n\t%d", temp->data);
      temp=temp->next;
    }
    printf("\n\t%d", temp->data);
  }
  else
  {
    printf("\nList is empty");
  }
}
void main()
{
  int ch;
  clrscr();
  while(1)
  {
    printf("\n------------------------------------");
    printf("\nEnter:\n1. To create\n2. To insert at start\n3. To insert at end\n4. To insert at middle\n5. To delete at start\n6. To delete at end\n7. To delete at position\n8. To display\n9. Quit");
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
	printf("\nInvalid choise, try again...");
    }
  }
  getch();
}