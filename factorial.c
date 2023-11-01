#include<stdio.h>
#include<cs50.h>

int colatz(int n);

int main(void)
{

    int n = get_int("Please enter a number for the Colatz Sequence: ");
    int colatz_sequence = colatz(n);
    printf("%i",colatz_sequence);

}


int colatz(int n)
{
    if(n==1)
    {
        return 1;
    }

    else if(n%2 == 0)
    {
        int number;

        n = n/2;

        printf("%i",n);

        return colatz(n);
    }

    else
    {
        int number;

        n = 3 * n + 1;

        printf("%i",n);

        return colatz(n);
    }

}
