#include <stdio.h>

int main() {
    int rows;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf("   ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("%-3d", j);
        }
        
        for (int j = i - 1; j >= 1; j--) {
            printf("%-3d", j);
        }
        
        printf("\n");
    }
    
    return 0;
}
//%-3d is a format specifier used with the printf() function to print integers.
//- character in %-3d is an optional flag that specifies left alignment of the integer within its field. 
//If this flag is not used, the integer will be right aligned by default.
//The 3 in %-3d specifies the minimum width of the field to be used for printing the integer. 
//This means that if the integer requires less than 3 characters to be printed, 
//it will be padded with spaces on the left to make it 3 characters wide.