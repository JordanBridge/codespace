#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    do
    {
       start_size = printf("Please Enter a start size");
    }
    while(start_size <= 9);
    // TODO: Prompt for end size

    do
    {
        end_size = printf("Please Give Me A Start Size");
    }
    while(end_size >= start_size);

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
}
