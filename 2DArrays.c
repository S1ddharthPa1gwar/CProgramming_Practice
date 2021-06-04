#include <stdio.h>

int main()
{
    int marks[3][4];
    int students = 3;
    int mark = 4;

    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < mark; j++)
        {
            printf("Enter the marks for student %d in %d subject : ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

 for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < mark; j++)
        {
            printf("the marks for student %d in %d subject is : %d \n", i + 1, j + 1,marks[i][j]);
        }
    }

    return 0;
}