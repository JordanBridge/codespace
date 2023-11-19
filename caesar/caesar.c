#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    do
    {
    for(int i = 0; argv[i];i++)
    {
       string message = argv[i];

       for(int k = 0; message[k]; k++)
       {
        printf("%c\n",message[k]);
       }

    }
    return 0;
    }
    while(argc > 1);

}
