#include<stdio.h>
#include<stdlib.h>
void main()
{
    float n1,n2,res;
    char op;
    printf("enter the operator(+,-,*,/)\n");
    scanf("%c",&op);
    printf("enter two numbers\n");
    scanf("%f %f",&n1,&n2);
    if(op=='+')
    {
        res=n1+n2;
        printf("result is %f",res);
    }
    else if(op=='-')
    {
        res=n1-n2;
        printf("result is %f",res);

    }
    else if(op=='*') 
    {
        res=n1*n2;
        printf("result is %f",res);

    }   
    else if(op=='/')
    {
        if(n2==0)
        {
            printf("enter non zero number\n");
            exit;

        }
        else 
        {
            res=n1/n2;
            printf("result is %f",res);

        }}
        else 
        {
            printf("enter a valid input");

        }
    }
    
