#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // Easter quotes
    const char *quotes[] = {
        "\"Easter spells out beauty, the rare beauty of new life.\" — S.D. Gordon",
        "\"The Easter Bunny ate all of the carrots we left for him. What a pig.\" — Steve Carell",
        "\"Easter is the only time when it's perfectly safe to put all of your eggs in one basket.\" — Evan Esar",
        "\"The Easter egg symbolizes our ability to break out of the hardened, protective shell we've surrounded ourselves with.\" — Siobhan Shaw"
    };

    int num_quotes = sizeof(quotes) / sizeof(quotes[0]);

    // Seed random number generator for true randomness
    srand((unsigned int)time(NULL));
    int random_index = rand() % num_quotes;

    // Print the quote.
    printf("%s\n\n", quotes[random_index]);
    
    // Bunny ASCII art
    printf("    /)/)   The Easter Bunny\n");
    printf("   (˶•༝•)     brings you\n");
    printf("  ୭( づ🍫   some chocolate!\n");

    // Big Unicode Easter Egg
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣤⠤⠀⠀⠤⣤⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⡆⠈⢠⣾⣷⡄⠁⢰⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠠⠆⠈⠋⠀⠶⠄⠙⠋⠠⠶⠀⠙⠁⠰⠄⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⣴⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣦⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⡉⠹⣿⠏⠉⢿⡿⠉⠉⢿⡿⠉⠹⣿⠏⢉⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⢰⣿⠀⡿⠀⡇⠸⡇⢸⡇⢸⠇⢸⠀⢿⠀⣿⡆⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⣿⣿⣦⣤⣼⣿⣤⣤⣾⣷⣤⣤⣿⣧⣤⣴⣿⣿⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠠⣤⣤⡤⠀⡀⠠⣤⣤⣤⣤⠄⢀⠀⢤⣤⣤⠄⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠹⠋⣤⣾⣿⣷⡌⠛⠛⢡⣾⣿⣷⣤⠙⠏⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⠶⣶⣶⣶⣶⣶⣶⣶⣶⠶⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");

    // Closing greeting
    printf("\nHappy Easter!\n");
    printf("Best Wishes, Isaac D. Hoyos");

    return 0;
}
