#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

// ask for height between 1 and 23

    do
    {
        height = get_int("Height between 1 and 23: ");
    }
    while (height < 0 || height > 23);

// stairs

    for (int i = height; i >= 1; i--)
    {
        for (int space = 1; space < i; space++)
        {
            printf(" ");
        }

        for (int hash = height; hash >= i - 1; hash--)
        {
            printf("#");
        }

        printf("\n");
    }
}
