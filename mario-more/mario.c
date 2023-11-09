#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int plevels;

    printf("Welcome To Mario Land, lets make a pryamid today! :D\n");

    //get base level
    plevels = get_int("How many levels do you want your pyramid to have??\n");


    //validate base level
    if(plevels < 1 )
    {
        printf("This is an invalid number of levels for your pryamid to be properly built sir!\n");
        return 0;
    }

    else if(plevels > 8)
    {
        printf("This value is too high!\n");
        return 0;
    }

    else
    {
        for(int i = 0; i < i; i++)
        {
            printf("#  # \n");
        }

    }

}