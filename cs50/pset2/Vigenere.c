#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
        int length = strlen(argv[1]);
        for(int i = 0; i < length; i++)
        {
            if (isalpha(argv[1][i]) == 0)
            {
                printf("Usage: ./vigenere keyword");
                return 1;
            }
        }
        string key = argv[1];
        // keyLen = strlen(argv[1]);

        string plainString = get_string("plaintext: ");
        stringLen = strlen(plainString);

        for(int i = 0; i < stringLen; i++)
        {
            if(isalpha(plainString[i]) != 0)
            {
                if(isupper(plainString[i]))
                {
                    if(plainString[i] + key[i] > 'Z')
                    {
                        plainString[i] = 'A' + (('Z' - 'A') % key[i]);
                    }
                    else
                    {
                        plainString[i] = plainString[i] + key[i];
                    }
                }
                else
                {
                    if(plainString[i] + key[i] > 'z')
                    {
                        plainString[i] = 'a' + (('z' - 'a') % key[i]);
                    }
                    else
                    {
                        plainString[i] = plainString[i] + key[i];
                    }
                }
            }
            else
            {
                printf("Usage: ./vigenere keyword");
                return 1;  
            }
        }
        printf("%s", plainString);
    }
    else
    {
        printf("Usage: ./vigenere keyword");
        return 1;
    }
}
