#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,root1,root2;
    float d,real,img;
    printf("enter the coefficient of quadratic equatio(a,b,c)\n");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(a==0&&b==0)
    {
        printf("invalid operator input");
    }
    else if(a==0)
    {
        printf("linear equation\n");
        root1=-c/b;
        printf("root=%f\n",root1);
    }
    else if(d==0)
    {
        printf("roots are real and equal\n");
        root1=-b/(2*a);
        root2=root1;
        printf("root1=%f\n root2=%f",root1,root2);

    }
    else if(d>0)
    {
        printf("roots are real and distinct\n");
        root1=(-b+(sqrt(d)))/(2*a);
        root2=(-b-(sqrt(d)))/(2*a);
        printf("roots=%f\nroot=%f",root1,root2);
    }
    else
    {
        printf("roots are imaginary\n");
        real=-b/(2*a);
        img=sqrt(fabs(d))/(2*a);
        printf("root1=%f+i%f\n",real,img);
        printf("root2=%f-i%f\n",real,img);
    }
    
}
