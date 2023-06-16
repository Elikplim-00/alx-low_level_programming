#include <stdio.h>

int main(void)
{
    char letter;

    // Loop through the lowercase alphabet
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        // Print each letter using putchar
        putchar(letter);
    }

    // Print a new line using putchar
    putchar('\n');

    return 0;
}
