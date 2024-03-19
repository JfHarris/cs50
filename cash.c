#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int changeTotal = 81;
    int totalCoins = 0;
    int quarter = 25;
    int quarterCount = 0;
    int dime = 10;
    int dimeCount = 0;
    int nickel = 5;
    int nickelCount = 0;
    int penny = 1;
    int pennyCount = 0;


    do
    {
        changeTotal = get_int("Change owed: ");
    }
    while (changeTotal < 0);
    
    while (changeTotal > 0)
    {
        if (changeTotal >= 25)
        {
        changeTotal -= quarter;
        totalCoins++;
        /*quarterCount++;
        printf("%d\n", changeTotal);
        printf("%d\n", totalCoins);
        printf("%d\n", quarterCount);*/
        }
        else if (changeTotal >= 10)
        {
        changeTotal -= dime;
        totalCoins++;
        /*dimeCount++;
        printf("%d\n", changeTotal);
        printf("%d\n", totalCoins);
        printf("%d\n", dimeCount);*/
        }
        else if (changeTotal >= 5)
        {
        changeTotal -= nickel;
        totalCoins++;
        /*nickelCount++;
        printf("%d\n", changeTotal);
        printf("%d\n", totalCoins);
        printf("%d\n", nickelCount);*/
        }
        else
        {
        changeTotal -= penny;
        totalCoins++;
        /*pennyCount++;
        printf("%d\n", changeTotal);
        printf("%d\n", totalCoins);
        printf("%d\n", pennyCount);*/
        }
    }
}
