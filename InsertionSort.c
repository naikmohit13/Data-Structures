//Implementation of Insertionsort in array.
#include<stdio.h>
void InsertionSort(int *,int);
void main()
{
    int n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);

    int A[n],i,item;
    printf("\nEnter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);

    InsertionSort(A,n);
    for(int j=0;j<n;j++)
        printf("%d\t",A[j]);

}

void InsertionSort(int A[],int n)
{
    int temp,j;
    for(int i=1;i<n;i++)
    {
        temp=A[i];
        for(j=i-1;j>=0 && temp<A[j];j--)
        {
            A[j+1]=A[j];
        }
        A[j+1]=temp;
    }
}
