#include<stdio.h>
int matrixproduct(int a,int b)
{   int i,j,c[10][10],k,n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            c[i][j]+= a[i][k]*b[k][j];
        }
    }
return c[][];
}

int main()
{
    int m,n,p,q,i,j;
    printf("Enter the dimensions of matrix A");
    scanf("%d %d",&m,&n);

    printf("Enter the dimensions of matrix B");
    scanf("%d %d",&p,&q);

    printf("The matrix A of order %d*%d is formed",m,n);
    printf("The matrix B of order %d*%d is formed",p,q);

    int a[m][n],b[p][q];

    printf("Enter the values for matrix A");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the values for matrix B");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The product of two matrices is:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",&matrixproduct(a[m][n],b[p][q]));
        }
    }
}
