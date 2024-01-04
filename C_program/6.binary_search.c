#include<stdio.h>

int main()
{
    int i,n,a[10],low,high,mid,key,pos;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the array elements (in ascending order):\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    low=0;
    high=n-1;
    pos=-1; // initialize pos to -1 (element not found)
    printf("Enter element to be searched:\n");
    scanf("%d",&key);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            pos=mid;
            printf("%d found at position %d.\n",key,pos+1);
            break;

        }
        else if(key>a[mid])
        {
            low=mid+1;

        }
        else 
        {
            high=mid-1;

        }
    }
    if(pos==-1)
    {
        printf("%d is not found.\n",key);
    }
    return 0;
}
