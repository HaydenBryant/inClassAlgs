#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int shift(char c);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int length = strlen(argv[1]);
        for (int i = 0; i < length; i++)
        {
            if (isalpha(argv[1][i]) == 0)
            {
                printf("Usage: ./vigenere keyword");
                return 1;
            }
        }
        string key = argv[1];

        string plainString = get_string("plaintext: ");
        
        int j = 0;

        for (int i = 0; i < strlen(plainString); i++)
        {
            if (isupper(plainString[i]))
            {
                if (plainString[i] + shift(key[(j % strlen(key))]) > 'Z')
                {
                    plainString[i] = 'A' + (plainString[i] + shift(key[(j % strlen(key))])) % ('A' + 26);
                }
                else
                {
                    plainString[i] = plainString[i] + shift(key[(j % strlen(key))]);
                }
                j++;
            }
            else if (islower(plainString[i]))
            {
                if (plainString[i] + shift(key[(j % strlen(key))]) > 'z')
                {
                    plainString[i] = 'a' + (plainString[i] + shift(key[(j % strlen(key))])) % ('a' + 26);
                }
                else
                {
                    plainString[i] = plainString[i] + shift(key[(j % strlen(key))]);
                }
                j++;
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
        printf("Usage: ./vigenere keyword");
        return 1;
    }
}

int shift(char c)
{
    string lowAlph = "abcdefghijklmnopqrstuvwxyz";
    string capAlph = "ABCDEFGHIJLKMNOPQRSTUVWXYZ";

    if (isupper(c))
    {
        for (int i = 0; i < 26; i++)
        {
            if (c != capAlph[i])
            {
                continue;
            }
            else
            {
                return i;
            }
        }
    }
    else if (islower(c))
    {
        for (int i = 0; i < 26; i++)
        {
            if (c != lowAlph[i])
            {
                continue;
            }
            else
            {
               return i;
            }
        }
    }
    else
    {
        printf("Usage: ./vigenere keyword");
        return 1;      
    }
     return 1;
}
