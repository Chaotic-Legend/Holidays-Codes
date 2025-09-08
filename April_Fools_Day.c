#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>  // For sleep()

int main(void)
{
    // Array of quotes
    const char *quotes[] = {
        "\"The fool doth think he is wise, but the wise man knows himself a fool.\" — William Shakespeare",
        "\"I can resist everything except temptation.\" — Oscar Wilde",
        "\"A day without laughter is a day wasted.\" — Charlie Chaplin",
        "\"April Fools! Don't take life too seriously.\" — Isaac Hoyos",
        "\"Sometimes the jokes are on us!\""
    };

    // Array of playful pranks
    const char *pranks[] = {
        "Just kidding! Did you really fall for that?",
        "Surprise! You have been pranked!",
        "Oops! Something unexpected just happened!",
        "Don't worry, this is just harmless fun!"
    };

    // Seed random generator
    srand((unsigned int) time(NULL));

    // Pick a random quote
    int randomQuoteIndex = rand() % (sizeof(quotes) / sizeof(quotes[0]));
    printf("%s\n\n", quotes[randomQuoteIndex]);

    // Wait 2 seconds after the quote
    sleep(2);

    // Print unexpected message
    printf("Oops! Something unexpected just happened!\n");
    sleep(2);

    // Loading dots animation for 2 seconds
    printf("\nProcessing");
    for (int i = 0; i < 3; i++) {
        sleep(0.5);  // Half a second
        printf(".");
        fflush(stdout);  // Make sure dot prints immediately
    }
    printf("\n\n");

    sleep(2);
    // Pick a random prank to print afterward
    int randomPrankIndex = rand() % (sizeof(pranks) / sizeof(pranks[0]));
    printf("%s\n\n", pranks[randomPrankIndex]);
    
    sleep(2);
    printf("Happy April Fools' Day!\n");
    printf("From, Isaac Hoyos\n");

    return 0;
}
