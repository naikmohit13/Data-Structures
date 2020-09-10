//Implementation of Selectionsort in array.
#include<stdio.h>
void SelectionSort(int *,int);
int MIN(int*,int,int);
void main()
{
    int n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);

    int A[n],i,item;
    printf("\nEnter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);

    SelectionSort(A,n);
    for(int j=0;j<n;j++)
        printf("%d\t",A[j]);

}

int MIN(int A[],int k,int n)
{
    int min=A[k],loc=k;
    for(int j=k+1;j<=n-1;j++)
        if(min>A[j])
        {
            min=A[j];
            loc=j;
        }
return loc;
}

void SelectionSort(int A[],int n)
{
    int loc,temp;
    for(int k=0;k<=n-1;k++)
    {
        loc=MIN(A,k,n);

        temp=A[k];
        A[k]=A[loc];
        A[loc]=temp;
    }
}
