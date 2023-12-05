#include <stdio.h>

int main()
{
    int capital = 6;
    int product_price = 6;
    int profit = 0;
    int iterations = 0;

    while (capital < 60)
    {
        if (profit != 0 && profit % product_price == 0)
        {
            capital += profit;
            profit = 0;

            printf("capital: %d\n", capital);
            printf("profit: %d\n", profit);
            printf("profit mod product_price: %d\n", profit % product_price);
            printf("***************  Simple profit  **********\n\n");
        }
        else if (profit != 0 && profit / product_price > 0)
        {
            capital += (profit - (profit % product_price));
            profit %= product_price;

            printf("capital: %d\n", capital);
            printf("profit: %d\n", profit);
            printf("profit mod product_price: %d\n", profit % product_price);
            printf("###############  Compound Profit  ##########\n\n");
        }
        else
        {
            profit += 2 * (capital / product_price);
            printf("--------------- Simple Addition ----------\n\n");
        }

        iterations++;

        printf("======> profit / product_price: %d\n", profit / product_price);
        printf("======> profit mod product_price: %d\n", profit % product_price);
        printf("iterations: %d\n", iterations);
        printf("profit: %d\n", profit);
        printf("capital: %d\n", capital);
        printf("--------------- Stats Report ----------\n\n");

    }

    return 0;
}