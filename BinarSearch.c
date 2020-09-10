//Binary search in array.
//Array must be sorted to apply binary search.
#include<stdio.h>
void BinarySearch(int *,int,int);
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

    printf("Enter the element to search:-\n");
    scanf("%d",&item);

    InsertionSort(A,n);
    BinarySearch(A,n,item);
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

void BinarySearch(int A[],int n,int item)
{
   int l=0,u=n-1,m;
   int flag=1;
   while(l<=u)
   {
       m=(l+u)/2;
       if(item==A[m])
       {
            printf("Search Successful\nItem is at index %d\n",m);
            flag=0;
            break;
       }
       else if(item>A[m])
            l=m+1;
       else
            u=m-1;
   }
   if(flag==1)
    printf("Search Unsuccessful.No such item in the array\n");

}
