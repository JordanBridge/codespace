#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int start_size;
    int end_size;
    // TODO: Prompt for start size
    do
    {
       start_size = get_int("Please Enter a start size: ");
    }
    while(start_size <= 9);
    // TODO: Prompt for end size

    do
    {
        end_size = get_int("Please Give Me A End Size: ");
    }
    while(end_size < start_size);
    // TODO: Calculate number of years until we reach threshold
    int years;
    for(years = 0; start_size >= end_size; years++)
    {
        start_size = start_size + (start_size/3) - (end_size/4);
    }

    return years;
    // TODO: Print number of years

    printf("It would take %i years for your llamas to reach your goal", years);
}
