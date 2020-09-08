#include<stdio.h>
#include<string.h>
int matching(char a[],char b[])
{
    int i,j;
    int m,n;
    n=strlen(a);
    m=strlen(b);

    for(i=0;i<=n-m;i++)
    {
        for(j=0;j<m;j++)
        if(a[i+j]!=b[j])
            break;
        if(j==m)
            return 1;
    }
    return 0;
}
int main()
{
    char a[]="pappapplemelonorange";
    char b[]="lemon";
    printf("%d\n",matching(a,b));
    return 0;
}