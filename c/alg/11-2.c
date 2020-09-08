#include<stdio.h>
int main()
{
    char mozi[100],kekka[100];
    int i,j=0;

    printf("input char:");
    scanf("%s",mozi);

        for(i=0;mozi[i]!='\0';i++)
        {
            if(mozi[i]=='a')
            continue;
            kekka[j]=mozi[i];
            j++;
        }
            

    printf("except for a:%s\n",kekka);
    return 0;
}