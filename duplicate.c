#include<stdio.h>
int Max(int A[], int size) 
{
    int max = A[0];
    for (int i = 1; i < size; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }
     return max;
}   
void main()
{
    int i,n;
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    int A[n];
    printf("\nEnter the elements of array");
    for(i=0;i<n;i++)
    {   
        printf("\nENTER THE ELEMENT %d:",i+1);
        scanf("%d",&A[i]);
    }
    int MAX=Max(A,n);
    int buffer[MAX];

    for(i=0;i<=MAX;i++)
    {
        buffer[i]=0;
    }
    for(i=0;i<n;i++)
    {
        buffer[A[i]]++;
    }
    for(i=0;i<=MAX;i++)
    {
        printf("\n%d>>>%d",i,buffer[i]);
    }

}