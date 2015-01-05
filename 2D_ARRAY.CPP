//Two Dimensional array implementation
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
  clrscr();
  int array[10][10],i,j,row,column,position_row,position_column,element,choice=0;
  textcolor(14);
  cout<<"\t\t";
  cprintf("Two Dimensional Array");
  cout<<"\n\nEnter the number of rows";
  cin>>row;
  cout<<"\nEnter the number of columns";
  cin>>column;
  cout<<"\nEnter array elements:";
  for(i=0;i<row;i++)
  {
    for(j=0;j<column;j++)
    {
      cin>>array[i][j];
    }
  }
  cout<<"\n-------------------------------";
  cout<<"\nYou have enetered:";
  for(i=0;i<row;i++)
  {
    cout<<"\n";
    for(j=0;j<column;j++)
    {
      cout<<array[i][j]<<"\t";
    }
  }
  cout<<"\n-------------------------------";
  cout<<"\nEnter: \n 1. To add row\n 2. To add column\n 3. To delete row\n 4. To delete column\n 5. To update any element\n 6. Exit";
  cin>>choice;
  switch(choice)
  {
    case 1:
      cout<<"\nEnter elements of the row:";
      for(j=0;j<column;j++)
      {
	cin>>array[row][j];
      }
      row=row+1;
      cout<<"\n-----------------------------";
      cout<<"\n New Array:";
      for(i=0;i<row;i++)
      {
	cout<<"\n";
	for(j=0;j<column;j++)
	{
	  cout<<array[i][j]<<"\t";
	}
      }
      break;
    case 2:
      cout<<"\nEnter elements of the column:";
      for(j=0;j<row;j++)
      {
	cin>>array[j][column];
      }
      column=column+1;
      cout<<"\n-----------------------------";
      cout<<"\n New Array:";
      for(i=0;i<row;i++)
      {
	cout<<"\n";
	for(j=0;j<column;j++)
	{
	  cout<<array[i][j]<<"\t";
	}
      }
      break;
    case 3:
      row=row-1;
      cout<<"\n---------------------------";
      cout<<"\nYour row deleted successfully, new array is:";
      for(i=0;i<row;i++)
      {
	cout<<"\n";
	for(j=0;j<column;j++)
	{
	  cout<<array[i][j]<<"\t";
	}
      }
      break;
    case 4:
      column=column-1;
      cout<<"\n--------------------------";
      cout<<"\nYour column deleted successfully, new array is:";
      for(i=0;i<row;i++)
      {
	cout<<"\n";
	for(j=0;j<column;j++)
	{
	  cout<<array[i][j]<<"\t";
	}
      }
      break;
    case 5:
      cout<<"\nEnter number of row in which that element is present:";
      cin>>position_row;
      cout<<"\nEnter number of column in which that element is present:";
      cin>>position_column;
      cout<<"\nEnter new element:";
      cin>>element;
      array[position_row-1][position_column-1]=element;
      cout<<"\n-----------------------------";
      cout<<"\nUpdated array:";
      for(i=0;i<row;i++)
      {
	cout<<"\n";
	for(j=0;j<column;j++)
	{
	  cout<<array[i][j]<<"\t";
	}
      }
      break;
    case 6:
      exit(0);
    default:
      cout<<"\nWrong Selection, Try again...";
      break;
  }
  getch();
}