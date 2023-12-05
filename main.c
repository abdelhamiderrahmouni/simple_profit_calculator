#include <stdio.h>

int main()
{
    int capital = 6;
    int product_price = 6;
    int profit = 0;
    int profit_to_gain = 2;
    int total_products_to_sell = capital / product_price;
    int iterations = 1;

    while (capital < 60)
    {
        // Check if there's enough profit to buy a product
        if (profit >= product_price)
        {
            int num_products_bought = profit / product_price;
            capital += num_products_bought * product_price;  // Use the profit to buy products
            total_products_to_sell += num_products_bought;  // Accumulate the number of products sold
            profit %= product_price;  // Update profit after buying products

            printf("Iteration: %d - Bought %d products\n", iterations, num_products_bought);
        }
        else
        {
            // If there's not enough profit to buy a product, generate more profit
            profit += profit_to_gain * (capital / product_price);
            printf("Iteration: %d - Generated more profit.\n", iterations);
        }

        iterations++;

        printf("Total Products to sell: %d\n", total_products_to_sell);
        printf("Profit: %d\n", profit);
        printf("Capital: %d\n", capital);
        printf("-----------------------------\n\n");
    }

    printf("Final result:\n");
    printf("Iterations: %d\n", iterations);
    printf("Final Profit: %d\n", profit);
    printf("Final Capital: %d\n", capital);
    printf("Total Products Sold: %d\n", total_products_to_sell);

    return 0;
}
