#include <stdio.h>
#include<cs50.h>


int valid_triangle(int a, int b, int c);

int main(void)
{
    #include <stdio.h>
#include<cs50.h>


int valid_triangle(int a, int b, int c);

int main(void)
{

    a = get_int("Please enter in the value of side 1: \n");
    b = get_int("Please enter in the value of side 2: \n");
    c = get_int("Please enter in the value of side 3: \n");

    valid_triangle(a,b,c);

}


int valid_triangle(int a, int b, int c)
{

   if (a > 0 && b > 0 && c > 0)
    {

        lengthchecker = a + b > c;

        printf("This makes a valid traingle");
        return lengthchecker;
    }
    else
    {
        printf("YOU ARE WRONG!");
        return 0;
    }


}

    a = get_int("Please enter in the value of side 1: \n");
    b = get_int("Please enter in the value of side 2: \n");
    c = get_int("Please enter in the value of side 3: \n");

    valid_triangle(a,b,c);

}


int valid_triangle(int a, int b, int c)
{

   if (a > 0 && b > 0 && c > 0)
    {

        lengthchecker = a + b > c;

        printf("This makes a valid traingle");
        return lengthchecker;
    }
    else
    {
        printf("YOU ARE WRONG!");
        return 0;
    }


}