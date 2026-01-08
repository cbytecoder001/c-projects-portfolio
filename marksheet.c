#include<stdio.h>
#include<conio.h>

// Marksheet program - Student grade calculator
int main()
{
    char name[50];
    int roll_no;
    float math, english, science, total, percentage;
    char grade;

    // Input student details
    printf("\n===== STUDENT MARKSHEET =====\n");
    printf("Enter Student Name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter Roll Number: ");
    scanf("%d", &roll_no);

    // Input marks for each subject
    printf("Enter marks for Math (out of 100): ");
    scanf("%f", &math);
    
    printf("Enter marks for English (out of 100): ");
    scanf("%f", &english);
    
    printf("Enter marks for Science (out of 100): ");
    scanf("%f", &science);

    // Calculate total and percentage
    total = math + english + science;
    percentage = (total / 300.0) * 100;

    // Determine grade based on percentage
    if(percentage >= 90)
        grade = 'A';
    else if(percentage >= 80)
        grade = 'B';
    else if(percentage >= 70)
        grade = 'C';
    else if(percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Display marksheet
    printf("\n===== MARKSHEET =====\n");
    printf("Name: %s", name);
    printf("Roll No: %d\n", roll_no);
    printf("\nSubject Marks:\n");
    printf("Math: %.2f\n", math);
    printf("English: %.2f\n", english);
    printf("Science: %.2f\n", science);
    printf("\nTotal Marks: %.2f/300\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    printf("========================\n");

    getch();
    return 0;
}
