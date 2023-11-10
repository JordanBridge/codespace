#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Welcome to super mario!\n");

    int ramp = get_int("Please state how long you want your ramp to be: ");

    if (ramp > 1)
    {

        for(int row = 0; i < ramp; i++)
        {
            printf("#\n");
        }

    }

    else
    {
        printf("This is one small ramp!\n");
        printf("\n");
        printf("#");

    }

}