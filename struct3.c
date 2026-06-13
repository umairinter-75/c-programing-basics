#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string candidate;
    int votes;
} candidate;

candidate get_candidate(void);

int main(void)
{
    candidate candidates[3];

    for (int i = 0; i < 3; i++)
    {
        candidates[i] = get_candidate();
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Candidate %i named %s has %i votes.\n", i + 1, candidates[i].candidate, candidates[i].votes);
    }
}

candidate get_candidate(void)
{
        candidate new_candidate;
    new_candidate.candidate = get_string("Name: ");
    new_candidate.votes = get_int("Votes: ");

    return new_candidate;

}
