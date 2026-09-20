#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0)); // Seed the random number generator
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a random number between 1 and 100.\n");
    printf("Try to guess the number!\n");
    int number, guess, attempts = 0;
    number = rand() % 100 + 1; // Random number between 1 and 100

    while (1) {
        printf("Enter your guess: ");
        if(scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a valid number.\n This attempt won't count.\n");
            while(getchar() != '\n'); // Clear the input buffer
            continue;
        }
        if (guess < 1 || guess > 100) {
            printf("Please enter a number between 1 and 100.\n This attempt won't count.\n");
            continue;
        }
        attempts++;

         if (guess == number) {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    return 0;
}