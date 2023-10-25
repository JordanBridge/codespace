#include <stdio.h>
#include<cs50.h>


int valid_triangle(int a, int b, int c);

int main(void)
{
    int a,b, c;

    a = get_int("Please enter in the value of side 1: \n");
    b = get_int("Please enter in the value of side 2: \n");
    c = get_int("Please enter in the value of side 3: \n");

    if valid_triangle(a,b,c)
    {
        printf("This is a valid triangle");
    }

    else
    {
        printf("This triangle is wrong!");
    }

}


int valid_triangle(int a, int b, int c)
{

   if (a > 0 && b > 0 && c > 0)
    {

        a + b > c;
        
        return 1;
    }
    else
    {
        printf("YOU ARE WRONG!");
        return 0;
    }


}