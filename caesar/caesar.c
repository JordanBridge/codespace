#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    do
    {
    for(int i = 0; argv[i];i++)
    {
       string message = argv[i];

       for(char k = 0; message[k + 3]; k++)
       {
        printf("%s", message);
       }

    }
    return 0;
    }
    while(argc > 1);

}
