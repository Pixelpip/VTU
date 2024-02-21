#include <stdio.h>
#include <stdlib.h>

#define MAX_DAYS 7

// Structure to represent a day
struct Day {
    char* dayName;
    int date;
    char* activityDescription;
};

// Function to create a day
void create(struct Day* day) {
    day->dayName = (char*)malloc(sizeof(char) * 20); // Assuming day name can be up to 20 characters
    printf("Enter day name: ");
    scanf("%s", day->dayName);
    
    printf("Enter date: ");
    scanf("%d", &day->date);
    __fpurge(stdin);

    day->activityDescription = (char*)malloc(sizeof(char) * 100); // Assuming activity description can be up to 100 characters
    printf("Enter activity description: ");
    scanf(" %[^\n]", day->activityDescription); // %[^\n] is used to read the entire line, including spaces.
}

// Function to read data from keyboard
void read(struct Day* calendar) {
    for (int i = 0; i < MAX_DAYS; ++i) {
        printf("\nEnter details for day %d:\n", i + 1);
        create(&calendar[i]);
    }
}

// Function to display the calendar
void display(struct Day* calendar) {
    printf("\nWeek's Activity Details Report:\n");
    printf("%-10s %-10s %-30s\n", "Day", "Date", "Activity Description");
    for (int i = 0; i < MAX_DAYS; ++i) {
        printf("%-10s %-10d %-30s\n", calendar[i].dayName, calendar[i].date, calendar[i].activityDescription);
    }
}

// Function to free memory allocated for the calendar
void freeMemory(struct Day* calendar) {
    for (int i = 0; i < MAX_DAYS; ++i) {
        free(calendar[i].dayName);
        free(calendar[i].activityDescription);
    }
}

int main() {
    // Dynamically allocate memory for the calendar
    struct Day* calendar = (struct Day*)malloc(sizeof(struct Day) * MAX_DAYS);

    // Check if memory allocation was successful
    if (calendar == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Call the read function to get data from the keyboard
    read(calendar);

    // Call the display function to print the week's activity details report
    display(calendar);

    // Free the allocated memory
    freeMemory(calendar);
    free(calendar);

    return 0;
}