#include<stdio.h>
#include<string.h>
void createTable(char b[],int next[])
{
    int m,i,j,k;
    m=strlen(b);

    next[0]=1;
    for(i=1;i<m;i++)
    {
        for(j=1;j<i;j++)
            for(k=j;k<i;k++){
                if(b[k]!=b[k-j])
                break;
            if(k==i)
            break;
            }
    }
    next[i]=j;
}

int matching(char a[],char b[],int next[])
{
    int i=0,j=0,n,m;
    n=strlen(a);
    m=strlen(b);
    while(i<n){
        if(a[i]==b[j]){
            if(j==m-1)
            return 1;
            else{
                i++;j++;
            }
        }
        else{
            j-=next[j];
            if(j<0){
                i++;j++;
            }
        }          
    }
    return 0;
}

int main()
{
    char a[]="abcabcabcabcabdabcabc";
    char b[]="abcabd";
    int next[100];
    int i;

    createTable(b,next);
    for(i=0;i<strlen(b);i++)
        printf("%d ",next[i]);
    printf("\n");

    printf("%s <- %s %d\n",a,b,matching(a,b,next));

    return 0;
}