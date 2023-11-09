#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int start_size;
    int end_size;
    // TODO: Prompt for start size
    do
    {
       start_size = get_int("Please Enter a start size");
    }
    while(start_size <= 9);
    // TODO: Prompt for end size

    do
    {
        end_size = get_int("Please Give Me A End Size");
    }
    while(end_size >= start_size);
    // TODO: Calculate number of years until we reach threshold

    for(int i = 1; start_size <= end_size; i++)
    {
        int llamas_alive = llamas_alive + (start_size/3) - llamas(n/4);
    }
    // TODO: Print number of years

    printf("It would take %i years for your llamas to reach your goal", i);
}
