#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Input: ");

    for (int i = 0; i < strlen(text); i++)
    {
        printf("%c", text[i]);
    }
    printf("\n");
}
