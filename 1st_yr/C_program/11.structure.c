#include<stdio.h>
struct student
{
    int usn;
    float marks;
    char name[10];
};
struct student s[10];

int main()
{
    float avg,sum=0.0;
    int i,n,m=0,l=0;
    printf("enter the number of students \n");
    scanf("%d",&n);
    printf("enter student details\n");
    for(i=0;i<n;i++)
    {
        printf("enter the USN\n");
        scanf("%d",&s[i].usn);
        printf("enter the student name\n");
        scanf("%s",s[i].name);
        printf("enter the marks\n");
        scanf("%f",&s[i].marks);

    }
    printf("\n......STUDENT DETAILS.....\n");
    printf("USN\tNAME\tMARKS\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%f\n",s[i].usn,s[i].name,s[i].marks);

    }
    for(i=0;i<n;i++)
    {
        sum=sum+s[i].marks;
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(s[i].marks>avg)
        {
            m++;
        }
        else 
        {
            l++;
        }
    }
    printf("number of student having marks above average: %d\n",m);
    printf("number of students having marks below average: %d\n",l);

    return 0;
}
