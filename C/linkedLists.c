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
    NODE *trav = rootNode;
    NODE *trav1;
    while(trav != NULL)
    {
        trav1 = trav->next;
        free(trav);
        trav = trav1;
    }
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
    freeList();

}
