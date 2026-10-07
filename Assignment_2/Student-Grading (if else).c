#include <stdio.h>

int main(void) {
    int Number_of_students, i;
    char Reg_Num[50];
    char name[100];
    float marks;
    char grade;

    printf("Enter the number of students: ");
    scanf("%d", &Number_of_students);

    for (i = 1; i <= Number_of_students; i+= 1) {
        printf("\n--- Entering Details for Student %d ---\n", i);

        printf("Enter Registration Number: ");
        scanf("%s", Reg_Num);

        printf("Enter Name: ");
        scanf(" %s", name);

        printf("Enter Marks: ");
        scanf("%f", &marks);

        if (marks >= 70 && marks <= 100) {
            grade = 'A';
        } else if (marks >= 60 && marks < 70) {
            grade = 'B';
        } else if (marks >= 50 && marks < 60) {
            grade = 'C';
        } else if (marks >= 40 && marks < 50) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        printf("\n----------------------------------------\n");
        printf("          STUDENT INFORMATION           \n");
        printf("----------------------------------------\n");
        printf("Registration No: %s\n", Reg_Num);
        printf("Name:            %s\n", name);
        printf("Marks:           %.1f\n", marks);
        printf("Grade:           %c\n", grade);
        
        if (marks >= 40) {
            printf("Status:          Passed\n");
        } else {
            printf("Status:          Failed\n");
        }
        printf("----------------------------------------\n");
    }

    return 0;
}