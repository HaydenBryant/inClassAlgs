// Implements a dictionary's functionality

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "dictionary.h"

// Represents number of children for each node in a trie
#define N 27

// Represents a node in a trie
typedef struct node
{
    bool is_word;
    struct node *children[N];
}
node;

// Represents a trie
node *root = NULL;

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // Initialize trie
    root = malloc(sizeof(node));
    if (root == NULL)
    {
        return false;
    }
    root->is_word = false;
    for (int i = 0; i < N; i++)
    {
        root->children[i] = NULL;
    }

    // Open dictionary
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        unload();
        return false;
    }

    // Buffer for a word
    char word[LENGTH + 1];

    NODE *trav = root;


    // Insert words into trie
    while (fscanf(file, "%s", word) != EOF)
    {
        int len = strlen(word);
        for(int i = 0; i < len; i++)
        {
            if(trav[i] < word[i])
            {
                trav = trav->children;
                i++;
                continue;
            }
            if(trav[i] < word[i])
            {
                trav = trav->children;
                i++;
                continue;
            }
            if(trav->children[i % 26] != NULL)
            {
                trav->children[i % 26] = word;
                break;
            }
            i++;
        }

    }

    // Close dictionary
    fclose(file);

    // Indicate success
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
    return false;
}
