#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int key = 0;
        int length = strlen(argv[1]);
        
        for (int i = 0; i < length; i++)
        {
            if (isdigit(argv[1][i]) == false)
            {
                printf("Usage: ./caesar key");
                return 1;
            }
        }
        
        key = atoi(argv[1]) % 26;
        
        string plainString = get_string("plaintext: ");
        
        for (int i = 0; i < strlen(plainString); i++)
        {
            if (isupper(plainString[i]))
            {
                if (plainString[i] + key > 'Z')
                {
                    plainString[i] = 'A' + (plainString[i] + key) % ('A' + 26);
                }
                else
                {
                    plainString[i] = plainString[i] + key;
                }
            }
            else if (islower(plainString[i]))
            {
                if (plainString[i] + key > 'z')
                {
                    plainString[i] = 'a' + (plainString[i] + key) % ('a' + 26);
                }
                else
                {
                    plainString[i] = plainString[i] + key;
                }
            }
            else
            {
                continue;
            }
        }
        printf("ciphertext: %s\n", plainString);
    }
    else
    {
        printf("Usage: ./caesar key");
        return 1;
    }
}