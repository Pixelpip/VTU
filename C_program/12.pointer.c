#include<stdio.h>
#include<math.h>
void main()
{
    float a[10],mean,sum=0,sd,sumstd=0,*ptr;
    int n,i;
    printf("enter value of n");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    ptr=a;
    for(i=0;i<n;i++)
    {
        sum=sum+*ptr;
        ptr++;

    }
    mean=sum/n;
    ptr=a;
    for(i=0;i<n;i++)
    {
        sumstd=sumstd+pow((*ptr-mean),2);
        ptr++;

    }
    sd=sqrt(sumstd/n);
    printf("sum=%f\nmean=%f\nstd deviation=%f\n",sum,mean,sd);
}
