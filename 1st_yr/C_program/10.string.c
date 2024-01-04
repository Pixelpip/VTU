#include <stdio.h>
#include <stdlib.h>

void length(char str[]);
void scomp(char str1[], char str2[]);
void scat(char str1[], char str2[]);

void length(char str[]) {
    int i = 0;
    while (str[i] != '\0') { 
        i++;
    }
    printf("Length of string is %d\n", i);
}

void scomp(char str1[], char str2[]) {
    int i = 0, k = 0;
    while (str1[i] != '\0') {  
        if (str1[i] == str2[i]) {
            i++;
        } else {
            k = 1;
            break;
        }
    }
    if (k == 1 || str2[i] != '\0') {  
        printf("Strings are not equal\n");  
    } else {
        printf("Strings are equal\n");
    }
}

void scat(char str1[], char str2[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') {  
        i++;
    }
    while (str2[j] != '\0') {  
        str1[i++] = str2[j++];
    }
    str1[i] = '\0';  
    printf("String after concatenation is %s\n", str1);
}

int main() {  
    int ch;
    char str1[10], str2[10];
    printf("Enter two strings (each with at most 9 characters):\n");  
    scanf("%9s%9s", str1, str2);  
    printf("1. Calculate length of string 1\n");
    printf("2. Calculate length of string 2\n");
    printf("3. Compare the 2 strings\n");
    printf("4. Concatenate 2 strings\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    switch (ch) {
        case 1:
            length(str1);
            break;
        case 2:
            length(str2);
            break;
        case 3:
            scomp(str1, str2);
            break;
        case 4:
            scat(str1, str2);
            break;
        default:
            printf("Invalid choice\n");
            break;  
    }
    return 0;
}
