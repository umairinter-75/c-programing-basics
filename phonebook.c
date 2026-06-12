#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
   person people[3];

   people[0].name = "Umair";
   people[0].number = "+1-469-874-4125";

   people[1].name = "Aamir";
   people[1].number = "+1-852-978-7863";

   people[2].name = "Affan";
   people[2].number = "+1+753-456-1234";

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
