#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO

    string message  = get_string("Message: ");

    for int i = 0; i < strlen(message); i++)
    {
        unsigned char byte = message[i];
        int binary[BITS_IN_BYTE];
        int quotinent = byte;
        int remainder;

        for(int j = 0; j < BYTES_IN_BYTE; )
    }

}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
