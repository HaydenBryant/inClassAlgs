#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int shift(char c);

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
//         printf("%i\n", key);

        string plainString = get_string("plaintext: ");
        int stringLen = strlen(plainString);

        for(int i = 0; i < stringLen; i++)
        {
           if(isalpha(plainString[i]) != 0)
           {
               if(isupper(plainString[i]))
               {
                   if(plainString[i] + shift(key[(i % strlen(key))]) > 'Z')
                   {
                       plainString[i] = 'A' + (plainString[i] + shift(key[(i % strlen(key))])) % ('Z' - 'A');
                    }
                    else
                    {
                        plainString[i] = plainString[i] + shift(key[(i % strlen(key))]);
                    }
                }
                else
                {
                    if(plainString[i] + shift(key[(i % strlen(key))]) > 'z')
                    {
                        plainString[i] = 'a' + (plainString[i] + shift(key[(i % strlen(key))])) % ('a' + 26);
                    }
                    else
                    {
                        plainString[i] = plainString[i] + shift(key[(i % strlen(key))]);
                    }
                }
           }
           else
           {
                printf("Usage: ./caesar key");
                return 1;
           }
           
        }
        printf("Ciphertext: %s\n", plainString);
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

   if(isupper(c))
   {
       for(int i = 0; i < 26; i++)
       {
           if(c != capAlph[i])
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
       for(int i = 0; i < 26; i++)
       {
           if(c != lowAlph[i])
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
