#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    // Array of quotes
    const char *quotes[] = {
        "\"Our wisdom comes from our experience, and our experience comes from our foolishness.\" — Sacha Guilty",
        "\"The fool doth think he is wise, but the wise man knows himself a fool.\" — William Shakespeare",
        "\"Those who wish to appear wise among fools, among the wise seem foolish.\" — Quintilian",
        "\"A day without laughter is a day wasted.\" — Charlie Chaplin"
    };

    // Array of playful pranks
    const char *pranks[] = {
        "Surprise! You have been pranked!",
        "Just kidding! Did you really fell for that?",
        "Don't worry, nothing broke—just a little fun.",
        "Unexpected silliness detected! Carry on, this is only for laughs."
    };

    // Seed random generator
    srand((unsigned int) time(NULL));

    // Pick a random quote.
    int randomQuoteIndex = rand() % (sizeof(quotes) / sizeof(quotes[0]));
    printf("%s\n\n", quotes[randomQuoteIndex]);

    // Wait 2 seconds after the quote.
    sleep(2);

    // Print unexpected message.
    printf("Oops! Something unexpected just happened!\n");
    sleep(2);

    // Loading dots animation for 2 seconds.
    printf("\nTroubleshooting Error... Processing");
    for (int i = 0; i < 3; i++) {
        sleep(1.5);
        printf(".");
        fflush(stdout);  // Make sure dot prints immediately.
    }
    printf("\n\n");
    sleep(2);
    
    // Pick a random prank to print afterward.
    int randomPrankIndex = rand() % (sizeof(pranks) / sizeof(pranks[0]));
    printf("%s\n\n", pranks[randomPrankIndex]);
    sleep(2);
    
    printf("Happy April Fools' Day!\n");
    printf("Best Wishes, Isaac D. Hoyos");
    return 0;
}
