#include <cs50.h>
#include <stdio.h>

int colatz(int n);
int steps;

int main(void)
{

    int n = get_int("Please enter a number for the Colatz Sequence: ");
    int colatz_sequence = colatz(n);
    printf(" We have arrrived at %i it took %i steps to get here! \n", colatz_sequence, steps);
}

int colatz(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {

        n = n / 2;

        printf("%i \n", n);

        steps = steps + 1;

        return colatz(n);
        return steps;
    }

    else
    {

        n = 3 * n + 1;

        printf("%i \n", n);

        steps = steps + 1;

        return colatz(n);
        return steps;
    }
}
