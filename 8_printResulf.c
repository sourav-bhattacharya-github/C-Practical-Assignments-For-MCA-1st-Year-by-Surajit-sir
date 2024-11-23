// Write a program to input name, marks of 5 subjects of a student and display the name of the student, the  total marks scored, percentage scored and the class of result.
#include <stdio.h>

int main()
{

    char name[50];
    float marks[5], total = 0;

    printf("Enter the name of Student : ");
    scanf("%s", name);

    printf("Enter marks of 5 subject : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    // calculate percentage
    float percentage = (total / 500) * 100;

    // print grade
    char grade;
    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'E';
    }

    // Dispaly the Result
    printf("\nName of Student : %s \n", name);
    printf("Total marks scored : %.2lf \n", total);
    printf("Percentage scored : %.2lf%% \n", percentage);
    printf("Class of result : %c \n\n", grade);
    return 0;
}
