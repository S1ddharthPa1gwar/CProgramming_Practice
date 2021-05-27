#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, count = 1;
    srand(time(0));
    num = rand() % 100 + 1;
    //printf("%d\n", num);
    do
    {
        printf("Guess the number between 1 to 100 : \n");
        scanf("%d", &guess);

        if (guess > num)
        {
            printf("try with smaller number then last try!\n");
        }
        else if (guess < num)
        {
            printf("try with greater number then last try!\n");
        }
        else
        {
            printf("Congratulations!!you guessed the correct number in %d tries.\n", count);
        }
        count++;
    } while (guess != num);
    return 0;
}