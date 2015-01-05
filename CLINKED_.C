//Implementation of Circular Linked List
#include<stdio.h>
#include<conio.h>
#include<process.h>
struct clist
{
  int data;
  struct clist*next;
};
struct clist*end=NULL;
void create()
{
  int num;
  struct clist*p;
  printf("\nEnter the number");
  scanf("%d",&num);
  p=(struct clist*)malloc(sizeof(struct clist));
  if(end==NULL)
  {
    p->data=num;
    p->next=NULL;
    end=p;
    end->next=p;
  }
  else
  {
    p->data=num;
    p->next=NULL;
    p->next=end->next;
    end->next=p;
    end=p;
  }
  printf("%d is added in list",num);
}
void insert_at_start()
{
  int num;
  struct clist*p;
  if(end!=NULL)
  {
    printf("\nEnter number");
    scanf("%d",&num);
    p=(struct clist*)malloc(sizeof(struct clist));
    p->data=num;
    p->next=end->next;
    end->next=p;
    printf("%d is added in list",num);
  }
  else
  {
    printf("\nList is empty");
  }
}
void insert_at_end()
{
  int num;
  struct clist*p;
  if(end!=NULL)
  {
    printf("Enter Number");
    scanf("%d",&num);
    p=(struct clist*)malloc(sizeof(struct clist));
    p->data=num;
    p->next=end->next;
    end->next=p;
    end=p;
    printf("%d is added in list",num);
  }
  else
  {
    printf("\nList is empty");
  }
}
void delete_at_start()
{
  struct clist*temp,*temp1;
  if(end!=NULL)
  {
    temp=end->next;
    end->next=temp->next;
    printf("%d is deleted", temp->data);
    free(temp);
  }
  else
  {
    printf("\nList is empty");
  }
}
void delete_at_end()
{
  struct clist*temp,*temp1;
  if(end!=NULL)
  {
    temp=end->next;
    while(temp->next!=end)
    {
      temp=temp->next;
    }
    temp1=temp->next;
    temp->next=end->next;
    end=temp;
    printf("%d is deleted", temp1->data);
    free(temp1);
  }
  else
  {
    printf("\nList is empty");
  }
}
void display()
{
  struct clist*temp;
  if(end!=NULL)
  {
    temp=end->next;
    while(temp->next=end->next)
    {
      printf("\n\t%d",temp->data);
      temp=temp->next;
    }
    printf("\n\t%d",temp->data);
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
    printf("\nEnter:\n1. To create\n2. To insert at start\n3. To insert at end");
    printf("\n4. To delete at start\n5. To delete at end\n6. To display\n7. To quit");
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
	delete_at_start();
	break;
      case 5:
	delete_at_end();
	break;
      case 6:
	display();
	break;
      case 7:
	exit(0);
      default:
	printf("\nInvalid selection,try again...");
    }
  }
  getch();
}