#include <cs50.h>
#include <stdio.h>

int numberBars(int smallBars, int bigBars, int basketSize)
{
    if(bigBars * 5 > basketSize)
    {
        basketSize = basketSize % 5;
    }
    else
    {
        basketSize = basketSize - (bigBars * 5);
    }

    if(basketSize > smallBars)
    {
        return -1;
    }
    else
    {
        return basketSize % smallBars;
    }
}

int main(void)
{
    int smallBars = get_int("How many small bars: ");
    int bigBars = get_int("How many big bars: ");
    int basketSize = get_int("Basket size: ");
    printf("%i", numberBars(smallBars, bigBars, basketSize));
}