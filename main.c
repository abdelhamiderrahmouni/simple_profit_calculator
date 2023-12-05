#include <stdio.h>

int main()
{
    int capital = 6;
    int product_price = 6;
    int profit = 0;
    int iterations = 0;

    while (capital < 60)
    {
        // Check if there's enough profit to buy a product
        if (profit >= product_price)
        {
            int num_products = profit / product_price;
            capital += num_products * product_price;  // Use the profit to buy products
            profit %= product_price;  // Update profit after buying products

            printf("Bought %d products.\n", num_products);
        }
        else
        {
            // If there's not enough profit to buy a product, generate more profit
            profit += 2 * (capital / product_price);
            printf("Generated more profit.\n");
        }

        iterations++;

        printf("Iteration: %d\n", iterations);
        printf("Profit: %d\n", profit);
        printf("Capital: %d\n", capital);
        printf("-----------------------------\n\n");
    }

    printf("Final result:\n");
    printf("Iterations: %d\n", iterations);
    printf("Final Profit: %d\n", profit);
    printf("Final Capital: %d\n", capital);

    return 0;
}
