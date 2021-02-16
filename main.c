#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MAX = 100, MIN = 1;
    int mysteryNumber = 0, answer = 0, count = 0, newGame = 1;

    srand(time(NULL)); // Initiate a random number generator 
    mysteryNumber = (rand() % (MAX - MIN + 1)) + MIN; // Get the random value

    do
    {
        printf("Welcome into my first game. \n");
        printf("You'll have to find a random number between 1 and 100\n");
        
        do
        {
            printf("What's the number ?");
            scanf("%d", &answer);
            if (mysteryNumber != answer)
            {
                if (mysteryNumber < answer)
                {
                    printf("It's less !\n\n");
                }
                else
                {
                    printf("It's more !\n\n");
                }
            }
            
            count++;

        } while (mysteryNumber != answer);
        printf("\nWell done you found the right number !\n");
        printf("You had to guess %d times !\n", count);
        printf("\nWould you like to play again ?\n1 = Yes | 0 = No\n");
        scanf("%d", &newGame);

    } while (newGame);

    return 0;
}
