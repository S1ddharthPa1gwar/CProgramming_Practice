#include <stdio.h>

int main()
{
    int Physics, Maths, Sanskrit;
    printf("Enter marks in Physics : ");
    scanf("%d", &Physics);
    printf("Enter marks in Maths : ");
    scanf("%d", &Maths);
    printf("Enter marks in Sanskrit : ");
    scanf("%d", &Sanskrit);
    float avg = (Maths + Sanskrit + Physics) / 3;
    if (avg >= 40 && Physics >= 33 && Maths >= 33 && Sanskrit >= 33)
        printf("Congratulations you've passed the exam!\n");
    else
    {
        printf("You failed the exam!\n");
    }

    return 0;
}