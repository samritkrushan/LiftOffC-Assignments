#include <stdio.h>
int max(int[],int);
int main()
{
    int a[100],l,z,i;
    printf("Enter size of array:"  );
    scanf("%d",&l);
    printf("Enter the elements into array:  ");
    for(i=0;i<l;i++)
    {
    	scanf("%d",&a[i]);
    }
    z=max(a,l);
    printf("Largest number is: %d ",z);
    return 0;
}
int max(int a[],int l)
{
    int i,x;
    x=a[0];
    for(i=1;i<l;i++)
    {
        if(x<a[i])
        {
		    x=a[i];
		}
    }
    return x;
}

