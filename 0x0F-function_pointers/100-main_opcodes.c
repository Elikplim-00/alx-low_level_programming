#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
    int i, bytes;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    bytes = atoi(argv[1]);

    if (bytes < 0)
    {
        printf("Error\n");
        return 2;
    }

    unsigned char *main_opcodes = (unsigned char *)main;

    for (i = 0; i < bytes; i++)
    {
        printf("%02x ", main_opcodes[i]);
    }

    printf("\n");

    return 0;
}

