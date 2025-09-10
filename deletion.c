#include<stdio.h>
void main()
{
    int n;
  printf("enter the number of terms:");
  scanf("%d",&n);
  int arr[n],i;
  printf("\n now enter terms");
  for(i=0;i<n;i++)
  {
    printf("\n Now enter number %d:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("enter the position (1 to %d)",n+1);
  int pos;
  scanf("%d",&pos);
  for(i=pos-1;i<n;i++)
  {
    arr[i]=arr[i+1];
  }
  n--;
  printf("new array after deletion");
  for(i=0;i<n;i++)
  {
    printf("\n %d",arr[i]);
  }
  
}