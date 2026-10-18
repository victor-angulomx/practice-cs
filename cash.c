#include <stdio.h>
#include <cs50.h>

int main(void){

    int n;
    int coins = 1;
    int one = 1;
    int five = 5;
    int ten = 10;
    int twentyfive = 25;

    do
    {
        n = get_int("Change owed: \n");
    }
    while (n < 1 && n < 100);

    if (n < 5)
    {
        printf("Number of coins: %i\n", n);
    }
    else if (n >= 5 && n < 10)
    {
        int c5 = n - five;
        printf("Number of coins: %i\n", coins + c5);
    }
    else if (n >= 10 && n < 25)
    {
        int c10 = n - ten;

        if (c10 >= 10)
        {
            c10 = c10 - ten;
            coins ++;
            printf("Number of coins: %i\n", coins + c10);
        }
        else if (c10 < 10)
        {
            if (c10 >= 5)
            {
                c10 = c10 - five;
                coins++;
                printf("Number of coins: %i\n", coins + c10);
            }
            else if (c10 < 5)
            {
                printf("Number of coins: %i\n", coins + c10);
            }
        }
    }
    else if (n >= 25)
    {
        int c25 = n - twentyfive;

        if (c25 >= 25)
        {
            c25 = c25 - twentyfive;
            coins++;
            if (c25 > 25)
            {
                c25 = c25 - twentyfive;
                coins++;
                if (c25 >= 20)
                {
                    c25 = c25 - 20;
                    coins ++;
                    coins ++;
                    printf("Number of coins: %i\n", coins + c25);
                }
                else if (c25 >= 10 && c25 < 20)
                {
                    c25 = c25 - ten;
                    coins++;
                    if (c25 >= 5)
                    {
                        c25 = c25 - five;
                        printf("Number of coins: %i\n", coins + c25);
                    }
                    else if (c25 < 5)
                    {
                        printf("Number of coins: %i\n", coins + c25);
                    }
                }
                else if (c25 <=5)
                {
                    c25 = c25 - five;
                    coins++;
                    printf("Number of coins: %i\n", coins + c25);
                }
            }
            else if (c25 >= 10 && c25 < 25)
            {
                c25 = c25 - ten;
                coins++;

                if (c25 >= 10)
                {
                    c25 = c25 - ten;
                    coins++;
                    printf("Number of coins: %i\n", coins + c25);
                }
                else if (c25 >= 5)
                {
                    c25 = c25 - five;
                    coins++;
                    printf("Number of coins: %i\n", coins + c25);
                }
                else if (c25 < 5)
                {
                    printf("Number of coins: %i\n", coins + c25);
                }
            }
            else if (c25 >= 5)
            {
                c25 = c25 - five;
                coins ++;
                printf("Number of coins: %i\n", coins + c25);
            }
            else if (c25 < 5)
            {
                printf("Number of coins: %i\n", coins + c25);
            }
        }
        else if (c25 >= 10 && c25 < 25)
        {
            c25 = c25 - ten;
            coins ++;

            if (c25 >= 10)
            {
                c25 = c25 - ten;
                coins++;
                printf("Number of coins: %i\n", coins + c25);
            }
            else if (c25 >= 5)
            {
                c25 = c25 - five;
                coins++;
                printf("Number of coins: %i\n", coins + c25);
            }
            else if (c25 < 5)
            {
                printf("Number of coins: %i\n", coins + c25);
            }
        }
        else if (c25 >= 5 && c25 < 10)
        {
            c25 = c25 - five;
            coins++;
            printf("Number of coins: %i\n", coins + c25);
        }
        else if (c25 < 5)
        {
            printf("Number of coins: %i\n", coins + c25);
        }
    }
}



