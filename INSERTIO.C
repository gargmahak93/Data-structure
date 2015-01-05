//Implementation of Insertion sort
#include<stdio.h>
#include<conio.h>
void main()
{
  int length,array[20],i,temp,j,k;
  clrscr();
  printf("Enter the size of array upto 20");
  scanf("%d",&length);
  printf("\nEnter array elements");
  for(i=0;i<length;i++)
  {
    scanf("%d",&array[i]);
  }
  for(k=1;k<=length-1;k++)
  {
    temp=array[k];
    j=k-1;
    while((temp<array[j])&&(j>=0))
    {
      array[j+1]=array[j];
      j=j-1;
    }
    array[j+1]=temp;
  }
  printf("\nSorted array:\n");
  for(i=0;i<length;i++)
  {
    printf("%d\n",array[i]);
  }
  getch();
}