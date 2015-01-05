//One dimensional Array Implementation
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
  clrscr();
  int array[50],i,array_length,choice=0,element,position;
  textcolor(14);
  cout<<"\t\t";
  cprintf("One dimensional Array");
  cout<<"\n\nEnter the length of array";
  cin>>array_length;
  cout<<"\nEnter array elements";
  for(i=0;i<array_length;i++)
  {
    cin>>array[i];
  }
  cout<<"\n----------------------------------";
  cout<<"\nYou have entered:";
  for(i=0;i<array_length;i++)
  {
    cout<<"\n"<<array[i];
  }
  cout<<"\n----------------------------------";
  cout<<"\nEnter:\n 1. Insert an element\n 2. Delete an element\n 3. Update any element\n 4. Exit";
  cin>>choice;
  switch(choice)
  {
    case 1:
      cout<<"\nEnter the new element";
      cin>>element;
      array_length=array_length+1;
      array[array_length-1]=element;
      cout<<"\n New Array:";
      for(i=0;i<array_length;i++)
      {
	cout<<"\n"<<array[i];
      }
      break;
    case 2:
      array_length=array_length-1;
      cout<<"\n New Array:";
      for(i=0;i<array_length;i++)
      {
	cout<<"\n"<<array[i];
      }
      break;
    case 3:
      cout<<"\nEnter new element:";
      cin>>element;
      cout<<"\nEnter the position u want to update:";
      cin>>position;
      array[position-1]=element;
      cout<<"\n New Array:";
      for(i=0;i<array_length;i++)
      {
	cout<<"\n"<<array[i];
      }
      break;
    case 4:
      exit(0);
    default:
      cout<<"\nYou have entered a wrong choice";
      break;
  }
  getch();
}