#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

int main(void)


{
    int HAPPY_NEW_YEAR;
    HAPPY_NEW_YEAR = 10;
    
    while (HAPPY_NEW_YEAR>0)
    {
        printf("%d!!!\n", HAPPY_NEW_YEAR);
        HAPPY_NEW_YEAR = HAPPY_NEW_YEAR-1;
    }
    printf("HAPPY NEW YEAR!!!\n");
    printf("Hey! What Your New Year Resolution?!\n");
    printf("From Isaac Hoyos!\n");
}