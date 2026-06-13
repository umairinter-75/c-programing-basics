#include <cs50.h>
#include <stdio.h>

 typedef struct
    {
        string candidate;
        int votes;
    } candidate;


int main(void)
{
    candidate A;
    A.candidate = "Alice";
    A.votes = 5;

// Print the output
    printf("%s has %i votes.\n", A.candidate, A.votes);
}
