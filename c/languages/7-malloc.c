#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *pt;
    pt=(char*)malloc(100);
    if(pt==NULL)
    {
        printf("Memory cannot allocate.\n");
        exit(EXIT_FAILURE);
    }
    puts("input char within 100 letters:");
    gets(pt);
    puts("input char is...");
    puts(pt);
    free(pt);
    return 0;
}