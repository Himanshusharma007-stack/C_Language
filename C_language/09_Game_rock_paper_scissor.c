#include <stdio.h> //Rock,Paper, Scissor Game
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand take seed as an input and it is defined inside "stdlib.h"
    return rand() % n;
}

int greater(char char1, char char2)
{ 
    //For rock, paper, scissor- Returns 1 if c1>c2 and 0 otherwise. If c1==c2 it will return -1
    if (char1 == char2)
    {
        return -1;
    }

    if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
    if (char1 == char2)
    {
        return -1;
    }

    if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }
    if (char1 == char2)
    {
        return -1;
    }

    if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the rock, paper, scissor\n");

    for (int i = 0; i < 3; i++)
    {
        //Take player's Input
        printf("Choose 1 for rock, 2 for Paper, 3 for Scissor\n");
        printf("Player 1's Turn:\n");
        scanf("%d", &temp);
        getchar(); //For make program unbreakable (to vanish preused input from input buffer)
        playerChar = dict[temp - 1];
        printf("You chose %c\n\n", playerChar);

        //Generate computer's Input
        printf("Computer's Turn:\n");
        printf("Choose 1 for rock, 2 for Paper, 3 for Scissor\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("Computer choose %c\n", compChar);

        //Compare the Scores
        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
        }
        else
        {
            playerScore += 1;
        }
    }

    printf("\n\nYour Score: %d\nComputer's score: %d\n", playerScore, compScore);
    if (playerScore > compScore)
    {
        printf("You Win");
    }
    else if (playerScore < compScore)
    {
        printf("Computer Win");
    }
    else
    {
        printf("It's a Draw");
    }

    return 0;
}