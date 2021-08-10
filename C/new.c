#include <stdio.h>

#define ROW 10
#define COLUMN 30
#define min_Age 18
#define max_Age 25

int main(void)
{
    char name[ROW][COLUMN];
    int roll_no[ROW],age[ROW], number_of_students = 0, i;
    float marks[ROW];

    printf("\t\t\t STUDENT INFORMATION TABLE \t\t\t\n");
    for (i = 0; i < ROW; i++)
    {
        printf("\nEnter name:");
        scanf("%s", &name[i]);

        printf("\nEnter roll number: ");
        scanf("%d", &roll_no[i]);

        printf("\nEnter marks: ");
        scanf("%f", &marks[i]);
        
        printf("\nEnter age:");
        scanf("%d",&age[i]);
    }

    printf("\t\t\tThis is the student data\t\t\t\n");
    printf("Name \t\tRoll no  \tMarks  \t\tAge\n");
    printf("\n");
    for (i = 0; i < ROW; i++)
    {
        printf("%s \t\t", name[i]);
        printf("%d \t\t", roll_no[i]);
        printf("%.2f \t\t", marks[i]);
        printf("%d \t\t", age[i]);
        printf("\n");
    }

    //condition for checking the criteria
    for (i = 0; i < ROW; i++)
    {
        if (age[i] > min_Age && age[i] < max_Age && marks[i] > 0 && marks[i] < COLUMN && roll_no[i] > 0)
        {
            number_of_students++;
        }
    }

    printf("%d students\n", number_of_students);

    return 0;
} 