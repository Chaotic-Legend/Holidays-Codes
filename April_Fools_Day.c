#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
        "Surprise! You've been pranked!",
        "Oops! Something unexpected just happened!",
        "Don't worry, this is harmless fun!"
    };

    // Seed random generator
    srand((unsigned int) time(NULL));

    // Pick a random quote
    int randomQuoteIndex = rand() % (sizeof(quotes) / sizeof(quotes[0]));
    printf("%s\n\n", quotes[randomQuoteIndex]);

    // 50% chance to display a prank message
    if (rand() % 2 == 0)
    {
        int randomPrankIndex = rand() % (sizeof(pranks) / sizeof(pranks[0]));
        printf("💡 %s\n\n", pranks[randomPrankIndex]);
    }

    printf("Happy April Fools' Day!\n");
    printf("From, Isaac Hoyos\n");

    return 0;
}
