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

typedef struct QNODE
{
    int level;
    BNODE *bnode;
    struct QNODE *next;
} QNODE;

QNODE *head = NULL;
QNODE *tail = NULL;

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
    if (aNode == NULL) return;

    printf("%i ", aNode->value);
    if (aNode->low != NULL)
    {
        displayTreeOnEnter(aNode->low);
    }
    if (aNode->high != NULL)
    {
        displayTreeOnEnter(aNode->high);
    }
    return;
}

void displayTreeOnExit(BNODE *aNode)
{
    if (aNode == NULL) return;

    if (aNode->low != NULL)
    {
        displayTreeOnExit(aNode->low);
    }
    if (aNode->high != NULL)
    {
        displayTreeOnExit(aNode->high);
    }
    printf("%i ", aNode->value);
    return;
}

void freeNode(BNODE *aNode)
{
    if (aNode == NULL) return;

    //dont need ifs
    // if (aNode != NULL)
    // {
    //     freeNode(aNode->low);
    // }
    // if (aNode->high != NULL)
    // {
    //     freeNode(aNode->high);
    // }

    freeNode(aNode->low);
    freeNode(aNode->high);

    free(aNode);
    return;
}

BNODE* hasValue(int val)
{
    if(rootNode == NULL) return NULL;

    BNODE *trav = rootNode;

    while (true)
    {
        if (trav->value == val)
        {
            printf("Found %i\n", val);
            printf("%p\n", &trav);
            return 0;
        }


        if (val > trav->value && trav->high != NULL)
        {
            trav = trav->high;
            continue;
        }

        if (val < trav->value && trav->low != NULL)
        {
            trav = trav->low;
            continue;
        }

        break;
    }

    printf("%i was not found\n", val);
    return NULL;
}

void push(BNODE *bnode, int level)
{
    QNODE *newQNode = malloc(sizeof(QNODE));
    newQNode->bnode = bnode;
    newQNode->next = NULL;
    newQNode->level = level;

    if(head == NULL)
    {
        head = newQNode;
        tail = newQNode;
        return;
    }

    tail->next = newQNode;
    tail = newQNode;
}

BNODE *pop()
{
    QNODE *temp = head;
    head = temp->next;
    BNODE *btemp = temp->bnode;
    free(temp);
    return btemp;
}

void displayLevels()
{
    int prevLevel = 0;
    int currentLevel = 0;
    push(rootNode, currentLevel);
    currentLevel = 1;
    while (head->next != NULL)
    {
        BNODE* current = pop();
        printf("%i", current->value);
        //add children to queue for future processing
        if (current->low != NULL)
        {
            currentLevel++;
            push(current->low, currentLevel);
        }
        if (current->high != NULL)
        {
            currentLevel++;
            push(current->high, currentLevel);
        }

        if (currentLevel < head->level)
        {
            printf("\n");
        }

        printf("%i ", current->value);
    }
}

int main(void)
{
    int stream[] = {5, 8, 9, 4, 6, 7, 2, 3, 1, 10};
    for (int i = 0; i < 10; i++)
    {
        addNode(stream[i]);
    }
    // displayTreeOnExit(rootNode);
    printf("\n");
    // displayTreeOnEnter(rootNode);
    // hasValue(5);
    // hasValue(10);
    // hasValue(4);
    // hasValue(1);
    // hasValue(11);
    displayLevels();
    printf("\n");
    freeNode(rootNode);

}