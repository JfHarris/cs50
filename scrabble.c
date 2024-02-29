#include <stdio.h>
#include <cs50.h>
#include <string.h>
/*
Assign values to chars
split string into chars
get value of strings
determine higher score if any
declare winner/tie
*/
// REFACTOR...try array and combine score functions


int getp1WordScore(string p1word);
int getp2WordScore(string p1word);
void declareWinner(int score1, int score2);

int main(void)
{
    string p1word = get_string("Player 1: ");
    string p2word = get_string("Player 2: ");
    getp1WordScore(p1word);
    getp2WordScore(p2word);
    int score1 = getp1WordScore(p1word);
    int score2 = getp2WordScore(p2word);
    declareWinner(score1, score2);
}

int getp1WordScore(string p1word)
{
    int score1 = 0;
    // return total of both words separately p1wordScore p2wordScore
    for (int iter = 0, length = strlen(p1word); iter < length; iter++)
    {
        if (p1word[iter] == 'k' || p1word[iter] == 'K')
        {
            score1 += 5;
        }
        else if (p1word[iter] == 'd' || p1word[iter] == 'D' || p1word[iter] == 'g' || p1word[iter] == 'G')
        {
            score1 += 2;
        }
        else if (p1word[iter] == 'j' || p1word[iter] == 'J' || p1word[iter] == 'x' || p1word[iter] == 'X')
        {
            score1 += 8;
        }
        else if (p1word[iter] == 'q' || p1word[iter] == 'Q' || p1word[iter] == 'z' || p1word[iter] == 'Z')
        {
            score1 += 10;
        }
        else if (p1word[iter] == 'f' || p1word[iter] == 'F' || p1word[iter] == 'h' || p1word[iter] == 'H' || p1word[iter] == 'v' || p1word[iter] == 'V' || p1word[iter] == 'w' || p1word[iter] == 'W' || p1word[iter] == 'y' || p1word[iter] == 'Y')
        {
            score1 += 4;
        }
        else if (p1word[iter] == 'b' || p1word[iter] == 'B' || p1word[iter] == 'c' || p1word[iter] == 'C' || p1word[iter] == 'm' || p1word[iter] == 'M' || p1word[iter] == 'p' || p1word[iter] == 'P')
        {
            score1 += 3;
        }
        else
        {
            score1 += 1;
        }
    }

    return score1;
}

int getp2WordScore(string p2word)
{
    int score2 = 0;
    // return total of both words separately p1wordScore p2wordScore
    for (int iter = 0, length = strlen(p2word); iter < length; iter++)
    {
        if (p2word[iter] == 'k' || p2word[iter] == 'K')
        {
            score2 += 5;
        }
        else if (p2word[iter] == 'd' || p2word[iter] == 'D' || p2word[iter] == 'g' || p2word[iter] == 'G')
        {
            score2 += 2;
        }
        else if (p2word[iter] == 'j' || p2word[iter] == 'J' || p2word[iter] == 'x' || p2word[iter] == 'X')
        {
            score2 += 8;
        }
        else if (p2word[iter] == 'q' || p2word[iter] == 'Q' || p2word[iter] == 'z' || p2word[iter] == 'Z')
        {
            score2 += 10;
        }
        else if (p2word[iter] == 'f' || p2word[iter] == 'F' || p2word[iter] == 'h' || p2word[iter] == 'H' || p2word[iter] == 'v' || p2word[iter] == 'V' || p2word[iter] == 'w' || p2word[iter] == 'W' || p2word[iter] == 'y' || p2word[iter] == 'Y')
        {
            score2 += 4;
        }
        else if (p2word[iter] == 'b' || p2word[iter] == 'B' || p2word[iter] == 'c' || p2word[iter] == 'C' || p2word[iter] == 'm' || p2word[iter] == 'M' || p2word[iter] == 'p' || p2word[iter] == 'P')
        {
            score2 += 3;
        }
        else
        {
            score2 += 1;
        }
    }

    return score2;
}

void declareWinner(score1, score2)
{
    string message;
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
