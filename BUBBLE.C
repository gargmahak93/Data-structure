//Implementation of Bubble Sort
#include<stdio.h>
#include<conio.h>
void main()
{
  int array[5],i,j,temp;
  clrscr();
  textcolor(14);
  printf("\t\t");
  cprintf("Bubble Sort");
  printf("\nPlease insert 5 array elements followed by enter");
  for(i=0;i<5;i++)
  {
    scanf("%d",&array[i]);
  }
  for(i=0;i<5;i++)
  {
    for(j=0;j<4;j++)
    {
      if(array[j]>array[j+1])
      {
	temp=array[j];
	array[j]=array[j+1];
	array[j+1]=temp;
      }
    }
  }
  printf("\n Sorted array:\n");
  for(i=0;i<5;i++)
  {
    printf("\n%d",array[i]);
  }
  getch();
}