#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Welcome to super mario!\n");

    int ramp = get_int("Please state how long you want your ramp to be: ");

    for(int i = 0; i < ramp; i++)
    {
        printf("#");
    }

}