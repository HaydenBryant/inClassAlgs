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
        printf("%s", key);
    }
    else
    {
        printf("Usage: ./vigenere keyword");
        return 1;
    }
}
