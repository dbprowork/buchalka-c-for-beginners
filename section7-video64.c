/*
Generate random number from 0-20

Get user guess

Check if guess is valid

Return "too high", "too low" or a win message if the user guesses the number within 5 tries

Note: generating a random number:
    include stdlib and time
    use srand function
    create a time variable: time_t t
    initialise random number generator: srand((unsigned) time(&t))
    generate number: int randomNumber = rand() % 21
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i = 5, guess;
    time_t t;

    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;

    printf("Guess a number between 0 and 20.\n");

    while (i > 0) {
        if (i == 1){
            printf("You have 1 attempt.\n");
        }
        else {
            printf("You have %d attempts.\n", i);
        }

        printf("Enter a guess: ");
        scanf("%d", &guess);
        
        if (guess < 0 || guess > 20) {
            printf("Number must be between 0 and 20.\n");
        }
        else if (guess == randomNumber) {
            printf("Congratulations. You guessed the correct number!\n");
            break;
        }
        else if (guess < randomNumber) {
            printf("Too low.\n");
        }
        else if (guess > randomNumber) {
            printf("Too high.\n");
        }
        i--;
    }

    if (i == 0) {
        printf("You have no attempts left.\nThe number was %d.\n", randomNumber);
    }

    return 0;
}
