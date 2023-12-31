#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme program.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int sum = 0;
    char password[15];

    srand(time(0));

    for (i = 0; i < 11; i++)
    {
        password[i] = rand() % 94 + 32; /* ASCII range: 32-125 */
        sum += password[i];
    }

    password[i++] = sum / 10 + '0';
    password[i++] = sum % 10 + '0';
    password[i] = '\0';

    printf("%s\n", password);

    return 0;
}

