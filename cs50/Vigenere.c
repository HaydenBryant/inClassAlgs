#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
        int 
        int length = strlen(argv[1]);
        for(int i = 0; i < length; i++)
        {
            if (isdigit(argv[1][i]) == false)
            {
                printf("Usage: ./caesar key");
                return 1;
            } else 
            {
                key = atoi(argv[1]);
            }
        }

    }
    else
    {
        printf("Usage: ./caesar key");
        return 1;
    }
}