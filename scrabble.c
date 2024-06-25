#include <stdio.h>
#include <cs50.h>
#include <string.h>

/*
char a, A, e, E, i, I, l, L, n, N, o, O, r, R, s, S, t, T, u, U = 1;
char d, D, g, G = 2;
char b, B, c, C, m, M, p, P = 3;
char f, F, h, H, v, V, w, W, y, Y = 4;
char k, K = 5;
char j, J, x, X = 8;
char q, Q, z, Z = 10;
int word1total = 0;
int word2total = 0;
*/

int getWordScore(string word);
void declareWinner(int score1, int score2);

int main(void)
{
    string p1word = get_string("Player 1: ");
    string p2word = get_string("Player 2: ");

    int score1 = getWordScore(p1word);
    int score2 = getWordScore(p2word);

    declareWinner(score1, score2);
}

int getWordScore(string word)
{
    int score = 0;
    // return total of both words separately p1wordScore p2wordScore
    // array for point values a-z
    int pointValues[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1,
        1, 1, 1, 4, 4, 8, 4, 10
    };

    for (int iter = 0, length = strlen(word); iter < length; iter++)
    {
        char currentIndex = word[iter];

        if (currentIndex >= 'a' && currentIndex <= 'z')
        {
            score += pointValues[currentIndex -'a'];
        }
        else if (currentIndex >= 'A' && currentIndex <= 'Z')
        {
            score += pointValues[currentIndex -'A'];
        }
        else
        {
            score += 0;
        }
    }

    return score;
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
