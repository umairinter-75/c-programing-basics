#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

int main(void)
{
    node *list = NULL;

    for (int i = 0; i < 3; i++)
    {
        int x = get_int("Number: ");

        node *n = malloc(sizeof(node));
        n->number = x;
        n->next = list;

        list = n;
    }
}
