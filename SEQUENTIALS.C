//Implementation of Sequential Search
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[100],s,i,f=0,n;
  clrscr();
  printf("Enter size of array upto 100");
  scanf("%d",&n);
  printf("\nEnter %d array elements",n);
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nEnter number to search:");
  scanf("%d",&s);
  for(i=0;i<n;i++)
  {
    if(s==a[i])
    {
      printf("\nNumber found");
      f=1;
      break;
    }
  }
  if(f==0)
  {
    printf("\nNumber not found");
  }
  getch();
}