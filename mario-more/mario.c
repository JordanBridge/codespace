#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int plevels;

    printf("Welcome To Mario Land, lets make a pryamid today! :D\n");

    //get base level
    do
    {
        plevels = get_int("How many levels do you want your pyramid to have??\n");
    }

    while(plevels < 1 || plevels > 8);


    //validate base level

    do
    {
        char *pryamid_base;
        pryamid_base = printf("##  ##");


    }

}