#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
2 args
Convert int key to str
Case sensitive
Receive input to encipher
Use ASCII values for alphabet
Loop alpha values z/Z can go to a/A
*/

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
        int key = atoi(argv[1]);

        string userInput = get_string("Plaintext: ");
        printf("Ciphertext: ");

        for (int x = 0; x < strlen(userInput); x++)
        {
            if (isupper(userInput[x]))
            {
                printf("%c", (userInput[x] - 65 + key) % 26 + 65);
            }
            else if (islower(userInput[x]))
            {
                printf("%c", (userInput[x] - 97 + key) % 26 + 97);
            }
            else
            {
                printf("%c", userInput[x]);
            }
        }
        printf("\n");
    }
