#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0, maxAttempts = 7;

    // Seed random number generator
    srand(time(0));
    number = rand() % 100 + 1; // Random number between 1 and 100

    printf("=== Number Guessing Game ===\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("?? Congratulations! You guessed the number in %d attempts!\n", attempts);
            break;
        } 
        else if (guess < number) {
            printf("Too low! Try a higher number.\n");
        } 
        else {
            printf("Too high! Try a lower number.\n");
        }

        if (attempts == maxAttempts) {
            printf("\n?? You've used all %d attempts. The number was %d.\n", maxAttempts, number);
        }
    }

    return 0;
}

