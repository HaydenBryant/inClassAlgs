#include <cs50.h>
#include <stdio.h>


int main (void){
    char string[100] = "The quick brown fox jumped over the lazy dog";
    int count = 0;
    int longest = 0;

    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] != ' '){
            count++;
        }
        if(count > longest){
            longest = count;
        }
        if(string[i] == ' '){
            count = 0;
        }
    }
    printf("longest word is %d letters long\n", longest);
}