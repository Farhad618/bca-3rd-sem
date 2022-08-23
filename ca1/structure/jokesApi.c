#include <stdio.h>

//definition
struct Jokes
{
    int joke_id;
    char main_joke[150];
    char punchline[150];
};

struct Data
{
    int current_page;
    int limit;
    int next_page;
    int previous_page;
    struct Jokes results[3];
    int total_jokes;
    int total_pages;
};

int main(int argc, char const *argv[])
{
    //declaration and initilazition
    struct Data d1 = {
        2,
        3,
        3,
        1,
        {
            {100,
             "How did your dog eat your coding assignment?",
             "It took him a couple bytes."},
            {200,
             "What is the hardest part in programming?",
             "Naming variables."},
            {300,
             "0 is false and 1 is true right?",
             "1"},

        },
        300,
        100};

    //printing values
    printf("data: {\n");
    printf("\tcurrent_page: %d,\n", d1.current_page);
    printf("\tlimit: %d,\n", d1.limit);
    printf("\tnext_page: %d,\n", d1.next_page);
    printf("\tprevious_page: %d,\n", d1.previous_page);
    printf("\tresults: [\n");
    for (int joke = 0; joke < 3; joke++)
    {
        printf("\t\t{\n");
        printf("\t\tid: %d,\n", d1.results[joke].joke_id);
        printf("\t\tmain_joke: \"%s\",\n", d1.results[joke].main_joke);
        printf("\t\tpunchline: \"%s\",\n", d1.results[joke].punchline);
        printf("\t\t},\n");
    }
    printf("\t],\n");
    printf("\ttotal_jokes: %d,\n", d1.total_jokes);
    printf("\ttotal_pages: %d,\n", d1.total_pages);
    printf("}");

    return 0;
}

