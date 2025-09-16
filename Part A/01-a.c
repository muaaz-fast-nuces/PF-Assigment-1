#include <stdio.h>
#include <string.h>

int main()
{
    char allowed_countries[3][10] = {"USA", "PAK", "CANADA"};
    int total_spent_today = 0, previous_transaction_hour = 0, transactions_in_current_hour = 0, daily_spending_limit = 50000;

    int entered_customer_id, entered_amount, entered_hour;
    char entered_country[10];

    printf("Welcome to X Bank\nPlease enter your Customer ID, Transaction Amount, Country, and Hour of Transaction:\n");
    scanf(" %d %d %s %d", &entered_customer_id, &entered_amount, &entered_country, &entered_hour);

    if ((total_spent_today+entered_amount >= daily_spending_limit) || (transactions_in_current_hour >= 3 && previous_transaction_hour == entered_hour))
    {
        printf("Sorry , We can't proceed your transaction request ");
        return 0;
    }
    else if (strcmp(allowed_countries[0], entered_country) != 0 &&
             strcmp(allowed_countries[1], entered_country) != 0 &&
             strcmp(allowed_countries[2], entered_country) != 0)
    {
        printf("Sorry , We can't proceed your transaction request ");
        return 0;
    }

    total_spent_today += entered_amount;
    previous_transaction_hour = entered_hour;
    transactions_in_current_hour = previous_transaction_hour == entered_hour ? transactions_in_current_hour+1 :1;

    printf("Your transaction is successfully completed");
    return 0;
}