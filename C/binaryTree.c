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

}

void displayTreeOnExit(BNODE *aNode)
{
    if (rootNode == NULL) return;

    while(true)
    {
        printf("%i ", aNode->value);
        if (trav->low != NULL)
        {
            displayTreeOnExit(aNode->low);
        }
        if (trav->high != NULL)
        {
            displayTreeOnEnter(trav->high);
        }
        return;
    }

    //ternary
    //if rootnode low and rootnode high null print root
    //if rootnode low null and rootnode high not null print highs

    // if (aNode->low != NULL)
    // {
    //     if(aNode->high != NULL)
    //     {
    //         printf("%i\n", aNode->value);
    //         displayTreeOnEnter(aNode->low);
    //     }
    //     else
    //     {
    //         printf("%i\n", aNode->value);
    //         displayTreeOnEnter(aNode->low);
    //     }
    //     // printf("%i\n", aNode->value);
    //     // displayTreeOnEnter(aNode->low);
    // }


    // else if (aNode->low == NULL && aNode->high != NULL)
    // {
    //     displayTreeOnEnter(aNode->high);
    //     printf("%i\n", aNode->value);
    // }


    // if (aNode->low == NULL && aNode->high == NULL)
    // {
    //     printf("%i\n", aNode->value);
    // }
    // else if (aNode->high != NULL)
    // {
    //     printf("%i\n", aNode->value);
    // }
}

int main(void)
{
    int stream[] = {5, 8, 9, 4, 6, 7, 2, 3, 1, 10};
    for (int i = 0; i < 10; i++)
    {
        addNode(stream[i]);
    }
    // displayTreeOnEnter(rootNode);
    // printf("\n");
    // printf("%i\n", rootNode->value);
    // printf("%i\n", rootNode->low->value);
    // printf("%i\n", rootNode->low->low->value);
    displayTreeOnExit(rootNode);

}