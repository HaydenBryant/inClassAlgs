#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

//create a binary node
//node should have an integer value
//node should have two branches

typedef struct BNODE
{
    int value;
    struct BNODE *high;
    struct BNODE *low;
} BNODE;

BNODE *rootNode = NULL;

void addNode(int val)
{
    BNODE *newNode = malloc(sizeof(BNODE));
    newNode->value = val;
    newNode->high = NULL;
    newNode->low = NULL;

    if (rootNode == NULL)
    {
        rootNode = newNode;
        return;
    }

    BNODE *trav = rootNode;

    while (true)
    {
        if (val > trav->value)
        {
            if (trav->high == NULL)
            {
                trav->high = newNode;
                return;
            }
            trav = trav->high;
            continue;
        }
        else
        {
            if (trav->low == NULL)
            {
                trav->low = newNode;
                return;
            }
            trav = trav->low;
            continue;
        }
    }
}

void displayTreeOnEnter(BNODE *aNode)
{
    if (rootNode == NULL) return NULL;

    if(aNode->low != NULL)
    {
        displayTreeOnEnter(aNode->low);
    }
    else if(aNode->low == NULL && aNode->high != NULL)
    {
        displayTreeOnEnter(aNode->high);
    }
    
    if (aNode->low == NULL && aNode->high == NULL)
    {
        printf("%i\n", aNode->value);
    }
    else if (aNode->high != NULL)
    {
        printf("%i\n", aNode->value);
    }
}

void displayTreeOnExit(BNODE *aNode)
{

}

int main(void)
{
    int stream[] = {5, 8, 9, 4, 6, 7, 2, 3, 1, 10};
    for (int i = 0; i < 10; i++)
    {
        addNode(stream[i]);
    }
    displayTreeOnEnter(rootNode);
    printf("\n");
    displayTreeOnExit(rootNode);

}