#include <stdio.h>
#include <ctype.h>

#define MAXHIST 15
#define IN 1
#define OUT 0

int main()
{
    int c, i, j, status, wordcount;
    int hist[MAXHIST];

    wordcount = 0;
    status = OUT;
    for (i = 0; i < MAXHIST; ++i)
        hist[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (!isalpha(c))
        {
            status = OUT;
            hist[wordcount]++;
            wordcount = 0;
        }
        else
        {
            status = IN;
            ++wordcount;
        }
    }

    printf("\n");
    //paint the histogram
    for (i = 0; i < MAXHIST; ++i)
    {
        printf("%d ", i);
        for (j = 0; j < hist[i]; ++j)
            putchar('*');
        printf("\n");
    }

    return 0;
}
