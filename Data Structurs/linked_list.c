#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
} node_t;

void display()
{
    node_t *head = NULL;
    head = malloc(sizeof(node_t));

    if (head == NULL)
    {
        return 1;
    }
    head->val = 1;
    head->next = malloc(sizeof(node_t));
    head->next->val = 2;
    head->next->next = NULL;
}
int main()
{
    display();
    return 0;
}