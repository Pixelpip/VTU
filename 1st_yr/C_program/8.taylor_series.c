#include<stdio.h>
#include<math.h>
void main()
{
    float i=2,sum=0,term,denominator,numerator,x,degree;
    printf("enter value of degree");
    scanf("%f",&degree);
    x=degree*(3.14/180);
    numerator=x;
    denominator=1;
    do
    {
        term=numerator/denominator;
        numerator=-numerator*x*x;
        denominator=denominator*i*(i+1);
        sum=sum+term;
        i=i+2;
    }
    while(fabs(term)>=0.000001);
    printf("\n taylore series value of sin(%f) is %0.04f",degree,sum);
    printf("in according to library function sin(%f) is %0.4f\n",degree,sin(x));

    
}