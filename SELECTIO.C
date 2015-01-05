//Implementation of Selection Sort
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],i,j,temp;
  clrscr();
  printf("Please insert 5 array elements followed by enter");
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<5;i++)
  {
    for(j=i;j<4;j++)
    {
      if(a[i]>a[j+1])
      {
	temp=a[i];
	a[i]=a[j+1];
	a[j+1]=temp;
      }
    }
  }
  printf("\n Sorted array:\n");
  for(i=0;i<5;i++)
  {
    printf("\n%d",a[i]);
  }
  getch();
}