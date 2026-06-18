#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    /* Seed the PRNG with the current time */
    srand((unsigned) time(NULL));

    /* Generate a number in the range 1..1000 */
    int r = rand() % 1000 + 1;
    int no_of_guesses = 0;
    int guessed;

    // printf("random number:%d\n", r);
    do{
        printf("guess the number between 1 and 1000:");
        scanf("%d", &guessed);
        if(guessed>r){
            printf("the number is too high\n");
        } else if(guessed<r){
            printf("the number is too low\n");
        } else {
            printf("congrats u guessed it!\n");
        }
        no_of_guesses++;
    }while(guessed!=r);
    printf("you guessed the number in %d tries\n", no_of_guesses);
    
    return 0;
}
/* This is a simple number guessing game where the user has to guess a random number between 1 and 1000. 
The program will give feedback on whether the guess is too high, too low, or correct, and it will keep track of the number of
 guesses the user makes.
*/