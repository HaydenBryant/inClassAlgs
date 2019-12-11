#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int value;
    struct NODE *next;
} NODE;

NODE *rootNode = NULL;

void addNode(int val)
{
    //create a node
    //navigate to end of list
    //add new node to end of list

    NODE *newNode = malloc(sizeof(NODE));
    newNode->value = val;
    newNode->next = NULL;

    if(rootNode == NULL)
    {
        rootNode = newNode;
        return;
    }
    // if(rootNode->next == NULL)
    // {
    //     rootNode->next = newNode;
    // }
    // else
    // {
    //     NODE* p = rootNode;
    //     while(p->next != NULL)
    //     {
    //         p = p->next;
    //     }
    //     p->next = newNode;
    // }

    NODE* trav = rootNode;
    while(trav->next != NULL){
        trav = trav->next;
    }
    trav->next = newNode;

    // newNode->next = NULL;

    // rootNode->next = newNode;
}

void displayList()
{
    //display list in order seperated by ','
    // 5, 8, 9, 4
    // 5, 8, 9
    // 5
    if(rootNode->next == NULL)
    {
        printf("%i\n", rootNode->value);
    }
    else
    {
        NODE *trav = rootNode;

        do
        {
            printf("%i, ", trav->value);
            trav = trav->next;
        } while(trav->next != NULL);
        printf("%i\n", trav->value);
    }

}

int freeList()
{
    if (rootNode == NULL)
    {
        return 0;
    }

    NODE *freer = rootNode;
    NODE *trav1;
    while(freer != NULL)
    {
        trav1 = freer->next;
        free(freer);
        freer = trav1;
    }
    rootNode = NULL;
    return 0;
}

void freeNode(NODE* aNode)
{
    if (aNode->next == NULL)
    {
        free(aNode);
        return;
    }

    freeNode(aNode->next);
    free(aNode);
    return;
}

//return true or false
NODE* hasValue(int value)
{
    if(rootNode == NULL) return NULL;

    NODE *trav = rootNode;
    while (trav != NULL)
    {
        if (trav->value == value)
        {
           printf("Found %i\n", value);
           printf("%p\n", &trav);
           return 0;
        }
        trav = trav->next;
    }

    printf("false\n");
    //print out false and return NULL if the item does not exist in the list
    //return 1 if the item does exist in the list
    return 0;
}

int main(void)
{
    // NODE rootNode;
    // rootNode.value = 5;
    // rootNode.next = NULL;
    // NODE secondNode;
    // secondNode.value = 10;
    // secondNode.next = NULL;
    // aNode.next = &secondNode;

    // printf("%i\n", secondNode.value);
    // printf("%i\n", aNode.next->value);

    addNode(5);
    addNode(8);
    addNode(9);
    addNode(4);
    // printf("%i\n", rootNode->next->value);
    // printf("%i\n", rootNode->next->next->value);
    // printf("%i\n", rootNode->next->next->next->value);
    //rootnode.next->next->value
    displayList();
    hasValue(9);
    hasValue(5);
    hasValue(8);
    hasValue(4);
    // freeList();
    // addNode(7);
    // addNode(2);
    // displayList();
    // freeList();
    addNode(2);
    hasValue(7);
    addNode(7);
    hasValue(7);
    freeNode(rootNode);

}
