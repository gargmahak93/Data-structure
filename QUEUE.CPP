//Implementation of Queue
#include<iostream.h>
#include<conio.h>
#include<process.h>
int queue[10],front=0,rear=-1;
void add()
{
  int num;
  if(rear>=9)
    cout<<"\nQueue is full";
  else
  {
    cout<<"\nEnter the number";
    cin>>num;
    rear++;
    queue[rear]=num;
    cout<<"\nYour number is added in queue";
  }
}
void remove()
{
  int num;
  if(front>rear)
    cout<<"\nQueue is empty";
  else
  {
    num=queue[front];
    cout<<"\n"<<num<<" is removed from queue";
    front++;
  }
}
void traverse()
{
  int i;
  if(front>rear)
    cout<<"\nQueue is empty";
  else
  {
    for(i=rear;i>=front;i--)
    {
      cout<<"\n"<<queue[i];
    }
  }
}
void main()
{
  clrscr();
  int choice;
  textcolor(10);
  cout<<"\t\t";
  cprintf("Queue Implementation");
  while(1)
  {
    cout<<"\nEnter:\n1. Add element\n2. Remove element\n3. Traverse\n4. Exit";
    cin>>choice;
    switch(choice)
    {
      case 1:
	add();
	break;
      case 2:
	remove();
	break;
      case 3:
	traverse();
	break;
      case 4:
	exit(0);
      default:
	cout<<"\nWrong Selection, try Again...";
    }
  }
  getch();
}