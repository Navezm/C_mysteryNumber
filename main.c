#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int chooseLevel()
{
    int number = 0;

    do
    {
        printf("At which level will you play ?\n");
        printf("===1===\nBetween 1 and 100\n");
        printf("===2===\nBetween 1 and 1000\n");
        printf("===3===\nBetween 1 and 10000\n");
        scanf("%d", &number);
    } while (number < 1 || number > 3);
    
    return number;
}

int main(int argc, char** argv)
{
    srand(time(NULL)); // Initiate a random number generator 
    const int MIN = 1;
    int max = 0, mysteryNumber = 0, answer = 0, newGame = 1;

    switch (chooseLevel())
    {
    case 1:
        max = 100;
        break;
    case 2:
        max = 1000;
        break;
    case 3:
        max = 10000;
        break;
    default:
        break;
    }

    do
    {
        int count = 0;
        mysteryNumber = (rand() % (max - MIN + 1)) + MIN; // Get the random value

        printf("Welcome into my first game. \n");
        printf("You'll have to find a random number between 1 and %d\n", max);
        
        do
        {
            printf("What's the number ?");
            scanf("%d", &answer);
            if (mysteryNumber != answer)
            {
                if (mysteryNumber < answer)
                {
                    printf("It's less !\n\n");
                    printf("Cheat code = %d", mysteryNumber);
                }
                else
                {
                    printf("It's more !\n\n");
                    printf("Cheat code = %d", mysteryNumber);
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
