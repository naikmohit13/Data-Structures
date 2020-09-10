//Implementation of Mergesort in array.

//CoDe NOT WORkING PRoperly
#include<stdio.h>
void MergeSort(int *,int,int);
void Merge(int*,int,int,int);
void main()
{
    int n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);

    int A[n],i,item;
    printf("\nEnter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);

    int l=0,h=n-1;
    MergeSort(A,l,h);
    for(int j=0;j<n;j++)
        printf("%d\t",A[j]);

}
void MergeSort(int A[],int l,int h)
{
    int mid;
        if(l<h)
        {
            mid=(l+h)/2;
            MergeSort(A,l,mid);
            MergeSort(A,mid+1,h);
            Merge(A,l,mid,h);
        }

}

void Merge(int A[],int l,int mid,int h)
{
    int n1=mid-l+1;
    int n2=h-mid;
    int X[n1],Y[n2];

    for(int i=0;i<n1;i++)
        X[i]=A[l+i];
     for(int j=0;j<n2;j++)
        Y[j]=A[mid+1+j];

    int i=0,j=0,k=1;
    while(i<n1 && j<n2)
    {
        if(X[i]<=Y[j])
        {
            A[k]=X[i];
            i++;
            k++;
        }
        else
        {
            A[k]=X[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        A[k]=X[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        A[k]=Y[j];
        j++;
        k++;
    }
}
