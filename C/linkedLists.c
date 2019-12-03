#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int value;
    struct NODE *next;
} NODE;

void addNode(int val, NODE* rootNode)
{
    //create a node
    //navigate to end of list
    //add new node to end of list

    NODE *newNode = malloc(sizeof(NODE));
    newNode->value = val;
    newNode->next = NULL;
    if(rootNode->next == NULL)
    {
        rootNode->next = newNode;
    }
    else
    {
        NODE* p = rootNode;
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = newNode;
    }

    // newNode->next = NULL;

    // rootNode->next = newNode;
}

int main(void)
{
    NODE rootNode;
    rootNode.value = 5;
    rootNode.next = NULL;
    // NODE secondNode;
    // secondNode.value = 10;
    // secondNode.next = NULL;
    // aNode.next = &secondNode;

    // printf("%i\n", secondNode.value);
    // printf("%i\n", aNode.next->value);

    addNode(8, &rootNode);
    addNode(9, &rootNode);
    printf("%i\n", rootNode.next->value);
    printf("%i\n", rootNode.next->next->value);
    //rootnode.next->next->value
}
