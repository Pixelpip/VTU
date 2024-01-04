#include<stdio.h>
void main()
{
    int a[10][10], b[10][10], p[10][10], j, x, n, i, m, y, k;
    printf("Enter the number of rows and columns for matrix a\n");
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns for matrix b\n");
    scanf("%d %d", &x, &y);
    if(n != x)
    {
        printf("Matrix multiplication not possible\n");
    }
    else 
    {
        printf("Enter elements for matrix a\n");
        for(i = 0; i < m; i++) // Fix the loop condition to use m instead of n
        {
            for(j = 0; j < n; j++)
            {
              scanf("%d", &a[i][j]);
            }
        }
        
        printf("Enter the elements of matrix b\n");
        for(i = 0; i < x; i++) // Fix the loop condition to use x instead of n
        {
            for(j = 0; j < y; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        
        printf("Matrix a is\n");
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        
        printf("Matrix b is\n");
        for(i = 0; i < x; i++)
        {
            for(j = 0; j < y; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < y; j++)
            {
                p[i][j] = 0;
                for(k = 0; k < n; k++) // Fix the loop condition to use n instead of m
                {
                    p[i][j] += a[i][k] * b[k][j]; // Use shorthand operator +=
                }
            }
        }
        
        printf("The resultant matrix is\n");
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < y; j++)
            {
                printf("%d\t", p[i][j]);
            }
            printf("\n");
        }
    }
}
