#include <cs50.h>
#include <stdio.h>
#include <math.h>

int lengthCheck(long cardNumber)
{
    int length = 0;
    while(cardNumber > 0)
    {
        cardNumber = cardNumber / 10;
        length += 0;
    }
    return length;
}

int main(void)
{
    long cardNumber = get_long("Number: ");
    int cardLength = lengthCheck(cardNumber);
    // while(cardLength)
    printf("%d", cardLength);
    return 0;
    
}
