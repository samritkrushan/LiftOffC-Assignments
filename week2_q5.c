#include<stdio.h>
int main()
{
    int i,j,n,m,k;
    int a[100][100],b[100][100],c[100][100],d[100][100];
    printf("enter a 2-d array size");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("enter an array of 2d size");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        c[i][j]=0;
        for(k=0;k<m;k++)
        {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
        }
    }
    printf("the multiplaication of the a and b is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        d[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the addition of the a and b is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        printf("%d  ",d[i][j]);
        }
        printf("\n");
    }

    return 0;
}