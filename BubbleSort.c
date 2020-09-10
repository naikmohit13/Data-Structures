//Implementation of Bubblesort in array.
#include<stdio.h>
void BubbleSort(int *,int);
void main()
{
    int n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);

    int A[n],i,item;
    printf("\nEnter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);

    BubbleSort(A,n);
    for(int j=0;j<n;j++)
        printf("%d\t",A[j]);

}

void BubbleSort(int A[],int n)
{
    int temp;
    for(int round=1;round<n;round++)
        for(int i=0;i<=n-1-round;i++)
            if(A[i]>A[i+1])
            {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
}
