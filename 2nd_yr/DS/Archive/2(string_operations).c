//Develop a program in C for the follwing operations on strings
//a)read a main string(STR) ,a pattern string(PAT)
//and replace string(REP)
//b)Perform pattern matching operations:
//  Find and replace all occurences of PAT in STR with REP if PAT exists in STR
//  Report suitable message in case if PAT does not exist.
//   Dont use any builtin Function
//					

#include <stdio.h>

int main() {
    char str[100], rep[100], pat[100], ans[100];
    int i, j, k, c, m, flag = 0;

    printf("\nEnter the main string\n");
    scanf(" %[^\n]", str);

    printf("\nEnter the pattern string\n");
    scanf(" %[^\n]", pat);

    printf("\nEnter the replace string\n");
    scanf(" %[^\n]", rep);

    i = j = m = 0;

    while (str[m] != '\0') {
        if (str[m] == pat[i]) {
            i++;
            m++;
            if (pat[i] == '\0') {
                flag = 1;
                for (k = 0; rep[k] != '\0'; k++, j++)
                    ans[j] = rep[k];
                i = 0;
            }
        } else {
            ans[j] = str[m];
            j++;
            m++;
            i = 0;
        }
    }

    ans[j] = '\0';

    if (flag == 0) {
        printf("Pattern isn't found\n");
    } else {
        printf("\nThe resultant string is: %s\n", ans);
    }

    return 0;
}
