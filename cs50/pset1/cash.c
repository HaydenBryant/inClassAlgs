#include <stdio.h>
#include <cs50.h>



int main(void)
{
    int coins = 0;
    float change;
    
    do
    {
        change = get_float("Change: ");
    }
    while (change < 0);
    
        
    while ( change >= 25 ) 
    {
           coins += 1;
           change = change - 25;
    }
    
    while ( change >= 10 ) 
    {
           coins += 1;
           change = change - 10;
    }
    
    while ( change >= 5 ) 
    {
           coins += 1;
           change = change - 5;
    }
    
    while ( change >= 1 ) 
    {
           coins += 1;
           change = change - 1;
    }
    
    printf("%d\n", coins);
};
