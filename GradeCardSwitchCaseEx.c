#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);
    marks = marks / 10;
    switch (marks)
    {
    case (10):
    case (9):
        printf("you got 'A' grade. \n");
        break;
    case (8):
        printf("you got 'B' grade. \n");
        break;
    case (7):
        printf("you got 'C' grade. \n");
        break;
    case (6):case (5):
        printf("you got 'D' grade. \n");
        break;
    case (4):
        printf("you got 'Failed' n Exam. \n");
        break;
    }

    return 0;
}