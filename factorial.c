#include<stdio.h>
#include<cs50.h>

int colatz();

int main(void)
{
    
    n = get_int("Please enter a number for the Colatz Sequence: ");

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

        number = n/2;

        printf("%i",number);
    }

    else
    {
        int number;

        number = 3 * n + 1;

        printf("%i",number);
    }

}
