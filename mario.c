#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    if (height > 0)
    {
        for (int x = 1; x <= height; x++)
        {
            for (int y = x; y < height; y++)
            {
                printf(" ");
            }
            for (int z = 1; z <= x; z++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n");
    }
}
