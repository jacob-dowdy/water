#include <stdio.h>
#include <cs50.h>

int main (void)
{
    printf ("minutes: ");
    int shower_length = GetInt();
    int bot_min = 12;
    printf ("bottles: %d \n", shower_length * bot_min);
    
}