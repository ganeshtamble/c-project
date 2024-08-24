#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void displayCollegeInfo();
void manageClassSchedule();
void storeContacts();
void trackAssignments();

int main() {
    int choice;
    
    while (1) {
        // Display menu
        printf("College Guide Menu:\n");
        printf("1. Display College Information\n");
        printf("2. Manage Class Schedule\n");
        printf("3. Store Contacts\n");
        printf("4. Track Assignments\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayCollegeInfo();
                break;
            case 2:
                manageClassSchedule();
                break;
            case 3:
                storeContacts();
                break;
            case 4:
                trackAssignments();
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
//display college information
void displayCollegeInfo() {
    printf("\nCollege Information:\n");
    printf("Name: XYZ University\n");
    printf("Location: ABC City\n");
    printf("Founded: 1900\n");
    printf("Website: www.xyzuniversity.edu\n");
    printf("Contact: info@xyzuniversity.edu\n");
    printf("\n");
}
// manage class shedule
void manageClassSchedule() {
    int numberOfClasses;
    
    printf("\nEnter the number of classes: ");
    scanf("%d", &numberOfClasses);
    
    char classes[numberOfClasses][100];
    
    printf("Enter the class names:\n");
    for (int i = 0; i < numberOfClasses; i++) {
        printf("Class %d: ", i + 1);
        scanf(" %[^\n]", classes[i]);
    }
    
    printf("\nYour Class Schedule:\n");
    for (int i = 0; i < numberOfClasses; i++) {
        printf("Class %d: %s\n", i + 1, classes[i]);
    }
    printf("\n");
}
// store contacts
void storeContacts() {
    int numberOfContacts;
    
    printf("\nEnter the number of contacts: ");
    scanf("%d", &numberOfContacts);
    
    char contacts[numberOfContacts][100];
    
    printf("Enter the contact names:\n");
    for (int i = 0; i < numberOfContacts; i++) {
        printf("Contact %d: ", i + 1);
        scanf(" %[^\n]", contacts[i]);
    }
    
    printf("\nYour Contacts:\n");
    for (int i = 0; i < numberOfContacts; i++) {
        printf("Contact %d: %s\n", i + 1, contacts[i]);
    }
    printf("\n");
}
// track assignment
void trackAssignments() {
    int numberOfAssignments;
    
    printf("\nEnter the number of assignments: ");
    scanf("%d", &numberOfAssignments);
    
    char assignments[numberOfAssignments][100];
    
    printf("Enter the assignment details:\n");
    for (int i = 0; i < numberOfAssignments; i++) {
        printf("Assignment %d: ", i + 1);
        scanf(" %[^\n]", assignments[i]);
    }
    
    printf("\nYour Assignments:\n");
    for (int i = 0; i < numberOfAssignments; i++) {
        printf("Assignment %d: %s\n", i + 1, assignments[i]);
    }
    printf("\n");
}
