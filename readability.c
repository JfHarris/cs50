#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

/*
Receive input text
Return 'Grade WHATEVER' depending on complexity of input text
Round grade level to nearest integer
If grade level > 16 return 'Grade16+'
If grade level < 1 return 'Before Grade 1'
Formula for getting grade level int....index = 0.0588 * L - 0.296 * S - 15.8
    where L is the avg # of letters per 100 words in the text, and S is the avg # of sentences per
100 words in the text Need # of letters per 100 words Need # of sentences per 100 words Calculate
grade level after getting these numbers Print grade level
*/

int main(void)
{
    string inputText = get_string("Text: ");
    int letters = 0;
    int words = 1;
    int sentences = 0;

    for (int i = 0; i < strlen(inputText); i++)
    {
        if ((inputText[i] >= 65 && inputText[i] <= 90) ||
            (inputText[i] >= 97 && inputText[i] <= 122))
        {
            letters++;
        }
        else if (inputText[i] == ' ')
        {
            words++;
        }
        else if (inputText[i] == '.' || inputText[i] == '!' || inputText[i] == '?')
        {
            sentences++;
        }
    }

    float L = (float) letters / (float) words * 100;
    float S = (float) sentences / (float) words * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
