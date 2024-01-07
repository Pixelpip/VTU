//b. Solving Tower of Hanoi problem with n disk

#include <stdio.h>
void tower(int n, char beg, char aux, char end )
{
    if (n==0) 
        printf("Illegal, Try with non zero positive integers\n");
    else if (n==1)
        printf("Move disk from %c to %c\n", beg, end); 
    else
    {
        tower(n-1, beg, end, aux);
        tower(1, beg, aux, end);
        tower(n-1, aux, beg, end);
    }
}
void main()
{
    int n;
    char a,b,c;
    printf("Enter number of disks\n");
    scanf("%d",&n);
    printf("Tower of Hanoi for %d disk has following steps:\n",n);
    tower(n,'a','b','c');
}
