//Implementation of Binary Search
#include<stdio.h>
#include<conio.h>
void main()
{
  int array[5],i,j,is_element_found=0,low=0,mid,high,element,length;
  clrscr();
  textcolor(14);
  printf("\t\t");
  cprintf("Binary Search");
  printf("\nEnter the size of array upto 100\n");
  scanf("%d",&length);
  high=length-1;
  printf("\nEnter the array elements");
  for(i=0;i<length;i++)
  {
    scanf("%d",&array[i]);
  }
  printf("\nEnter element to search:");
  scanf("%d",&element);
  for(i=0;i<length;i++)
  {
    mid=(high+low)/2;
    if(array[mid]==element)
    {
      printf("\nElement found");
      is_elememt_found=1;
      break;
    }
    else
    {
      if(element>array[mid])
      {
	low=mid+1;
      }
      else
      {
	high=high+1;
      }
    }
  }
  if(is_element_found==0)
  {
    printf("\nElement not found");
  }
  getch();
}