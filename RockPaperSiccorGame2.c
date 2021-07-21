#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RPS(char user, char comp)
{
    // returns 1 if you win
    // returns 0 if draw
    // returns -1 if you lose
    if (comp == user)
        return 0;

    if (comp == 'S' && user == 'R')
    {
        return 1;
    }
    else if (comp == 'S' && user == 'P')
    {
        return -1;
    }

    if (comp == 'P' && user == 'R')
    {
        return -1;
    }
    else if (comp == 'P' && user == 'S')
    {
        return 1;
    }

    if (comp == 'R' && user == 'S')
    {
        return -1;
    }
    else if (comp == 'R' && user == 'P')
    {
        return 1;
    }
}

int main()
{
    char user;
    char comp;

    srand(time(0));
    int num = rand() % 100 + 1;

    if (num < 33)
    {
        comp = 'R';
    }
    else if (num > 32 && num <66){
        comp ='P';
    }
    else{
        comp = 'S';
    }

    printf("Enter 'R' for rock, 'P' for paper, 'S' for siccor :");
    scanf("%c", &user);
    int result = RPS(user, comp);
    printf("You chose %c and computer chose %c : \n", user, comp);
    if (result == 1 ? printf("You won the match") : result == (-1) ? printf("You lose the match")
                                                                   : printf("Match draw!!"))
        ;
    return 0;
}