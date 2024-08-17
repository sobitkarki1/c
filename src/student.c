#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

// Define a structure to represent a student
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to add a student to the list
void addStudent(struct Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Cannot add more students. Maximum limit reached.\n");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &students[*count].rollNumber);
    printf("Enter name: ");
    scanf(" %[^\n]%*c", students[*count].name); // Using %[^\n] to read string with spaces
    printf("Enter marks: ");
    scanf("%f", &students[*count].marks);

    (*count)++;
    printf("Student added successfully!\n");
}

// Function to display all students
void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }

    printf("\nList of Students:\n");
    for (int i = 0; i < count; i++) {
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

// Function to search for a student by roll number
void searchStudent(struct Student students[], int count) {
    int rollNumber;
    printf("Enter roll number to search: ");
    scanf("%d", &rollNumber);

    for (int i = 0; i < count; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("\nStudent found:\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n\n", students[i].marks);
            return;
        }
    }

    printf("Student with roll number %d not found.\n", rollNumber);
}

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    while (1) {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
