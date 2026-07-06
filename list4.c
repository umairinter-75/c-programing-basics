#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

void unload(node *list);

int main(void)
{
    // Memory for Numbers
    node *list = NULL;

    // Build List
    for (int i = 0; i < 3; i++)
    {
        // Allocate node for number
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            unload(list);
            return 1;
        }
        n->number = get_int("Number: ");
        n->next = list;

        // If list is empty
        if (list == NULL)
        {
            // This node is the whole list
            list = n;
        }
        // If number belongs at the beginning of the list
        else if (n->number < list->number)
        {
            // Insert node at the beginning
            n->next = list;
            list = n;
        }
        // If number belongs at the end of the list
        else
        {
            // Iterate over the nodes in list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // If at the end of the list
                if (ptr->next == NULL)
                {
                    // Append node
                    ptr->next = n;
                    break;
                }

                // If in the middle of the list
                if (n->number < ptr->next->number)
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    break;
                }
            }
        }
    }
    // Print Numbers
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }


    // Free Memory
   unload(list);
   return 0;

}



void unload(node *list)
{
   node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}
