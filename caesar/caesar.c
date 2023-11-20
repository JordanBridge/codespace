#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    int n = 3;

    do
    {
    for(int i = 0; argv[i];i++)
    {

       for(int k = 0;k < n; k++)
       {
        argv[i]++;
       }

       printf("%c\n", *argv[i]);
    }
    return 0;
    }
    while(argc > 1);

}
