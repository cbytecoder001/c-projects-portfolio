#include<stdio.h>
#include<conio.h>

// Program to calculate average of three numbers
int main()
{
    int a, b, c;
    float average;

    // Input three numbers from user
    printf("Please enter any three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Calculate average (dividing by 3.0 ensures float result)
    average = (a + b + c) / 3.0;

    // Display the average with 2 decimal places
    printf("Average: %.2f\n", average);

    getch();
    return 0;
}
