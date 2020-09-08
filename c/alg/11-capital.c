#include <stdio.h>
#include <string.h>
void capitalize(char a[])
{
    int i;

    printf("%s->", a);
    for (i = 0; i < strlen(a); i++)
        if (a[i] >= 'a' && a[i] <= 'z')
            printf("%c", a[i] + ('A' - 'a'));
        else
            printf("%c", a[i]);
    printf("\n");
}

int main()
{
    int i;
    char a[100];

    scanf("%s", a);
    capitalize(a);
}