#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    int n = 1;

    do
    {
    for(int i = 0; argv[i];i++)
    {
       string message = argv[i];

       for(int k = 0;k < n; k++)
       {
        message[i]++;
        printf("%s\n", message);
       }

    }
    return 0;
    }
    while(argc > 2);

}
