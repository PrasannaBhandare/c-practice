#include <stdio.h>

void even_odd(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    even_odd(n);
    return 0;
}

void even_odd(int n)
{
    int digit, even = 0, odd = 0;

    while (n > 0)
    {
        digit = n % 10;       // 1. Extract the last digit
        if (digit % 2 == 0)   // 2. Check and count it
            even++;
        else
            odd++;

        n = n / 10;           // 3. Chop off the last digit
    }

    printf("Even: %d, Odd: %d\n", even, odd);
}



