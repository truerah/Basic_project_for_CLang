#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "guess_game.h"

void guessGame() {
    int number, guess, attempts = 0;
    srand(time(NULL));
    number = rand() % 100 + 1; // Random between 1-100
    printf("\n-- Guess the Number Game --\n");
    do {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        attempts++;
        if(guess > number) printf("Too high!\n");
        else if(guess < number) printf("Too low!\n");
        else printf("Correct! You guessed in %d attempts.\n", attempts);
    } while(guess != number);
}
