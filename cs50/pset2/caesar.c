#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
        int key = 0;
        int length = strlen(argv[1]);
        
        for(int i = 0; i < length; i++)
        {
            if (isdigit(argv[1][i]) == false)
            {
                printf("Usage: ./caesar key");
                return 1;
            }
        }
        
        key = atoi(argv[1]) % 26;
        
        string plainString = get_string("plaintext: ");
        length = strlen(plainString);
        
        for(int i = 0; i < length; i++)
        {
            plainString[i] = plainString[i] + key;
        }
        printf("%s", plainString);
    }
    else
    {
        printf("Usage: ./caesar key");
        return 1;
    }
}
