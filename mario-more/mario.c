#include <cs50.h>
#include <stdio.h>

int main(void)
{

    printf("Welcome To Mario Land, lets make a pryamid today! :D");

    //get base level
    plevels = get_int("How many levels do you want your pyramid to have??");


    //validate base level
    if(plevels < 1 )
    {
        printf("This is an invalid number of levels for your pryamid to be properly built sir!");
        return 0;
    }

    else if(plevels > 8)
    {
        printf("This value is too high!")
        return 0;
    }

    else
    {
        for(plevels; plevels< plevels + 1; plevels++);

        printf("#  #");

    }

}