//Implementation of Stack
#include<iostream.h>
#include<conio.h>
#include<process.h>
int stack[10],top=-1;
void push()
{
  int num;
  if(top>=9)
  cout<<"\nStack is full";
  else
  {
    cout<<"\nEnter number:";
    cin>>num;
    top++;
    stack[top]=num;
    cout<<"\n"<<num<<" is pushed";
  }
}
void pop()
{
  int num;
  if(top<0)
  cout<<"\nStack is empty";
  else
  {
    num=stack[top];
    cout<<"\n"<<num<<" is poped";
    top--;
  }
}
void traverse()
{
  int i;
  if(top<0)
  cout<<"Stack is empty";
  else
  {
    for(i=top;i>=0;i--)
    {
      cout<<"\n"<<stack[i];
    }
  }
}
void main()
{
  clrscr();
  int choice;
  textcolor(10);
  cout<<"\t\t";
  cprintf("Stack Implementation");
  while(1)
  {
    cout<<"\nEnter:\n1. To Push\n2. To pop\n3. To Traverse\n4. Exit";
    cin>>choice;
    switch(choice)
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
	cout<<"Wrong Choise, try again...";
    }
  }
  getch();
}