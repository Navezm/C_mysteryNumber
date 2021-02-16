#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MAX = 100, MIN = 1;
    int mysteryNumber;
    int answer;

    srand(time(NULL)); // Initiate a random number generator 
    mysteryNumber = (rand() % (MAX - MIN + 1)) + MIN; // Get the random value

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
                printf("\nIt's less !\n");
            }
            else
            {
                printf("\nIt's more !\n");
            }
        }
        
    } while (mysteryNumber != answer);
    printf("Well done you found the right number !\n\n");


    // printf("%d", mysteryNumber);

    return 0;
}