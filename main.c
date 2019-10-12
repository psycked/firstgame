#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int answer = 0, guess = 0, try = 0, gamemode = 0, user_answer = 0, user_guess;
    const int MAX = 100, MIN = 1;
    srand(time(NULL));
    answer = (rand() % (MAX - MIN + 1)) + MIN;

    printf("Ladies & Gentlemen, welcome to my first... GAME !\n");      //Welcome
    printf("Thank you for playing, hope you'll like it :)\n\n\n");
    printf("Try to guess the randomly generated number !\n\n\n\n");
    printf("At any moment, feel free to type '0' in order to stop the game !\n\n");     //stops the game, NEED TO BE CHANGED --> RESTART ?



    printf("=== Game mode ===\n");
    printf("1. Single player\n");
    printf("2. Two players\n\n");
    printf("Please choose your Game mode : ");
    scanf("%d", &gamemode);
        if (gamemode == 1)
        {
            do
            {
                printf("What's the answer ?  ");
                scanf("%d", &guess);
                try++;
                if (guess == 0)
                    break;
                else if (answer < guess)
                    printf("It's less !\n");
                else if (answer > guess)
                    printf("It's more !\n");
                else
                    printf("The answer is correct ! You found the answer in %d tries !\n", try);

            } while (guess != answer);
        }
        else if (gamemode == 2)
        {
            printf("Player 1, please type a number in range 1 - 100 \n");
            scanf("%d", &user_answer);
            printf("Okay Player 2, now it's your turn to guess the answer !\n");
            do
            {
                printf("What's the answer ?  ");
                scanf("%d", &user_guess);
                try++;
                if (user_guess == 0)
                    break;
                else if (user_answer < user_guess)
                    printf("It's less !\n");
                else if (user_answer > user_guess)
                    printf("It's more !\n");
                else
                    printf("The answer is correct ! You found the answer in %d tries !\n", try);
            } while (user_guess != user_answer);
        }
        else
        {
            printf("Please choose a Game mode !");
        }

    return 0;
}
