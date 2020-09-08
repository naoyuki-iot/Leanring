#include <stdio.h>
int max(int v[],int n)
{  
    int i;
    int m = v[0];
    for(i=0;i<n;i++)
    {    
        if(v[i]>m)
        m = v[i];
            
    }
    return max;
}

int main()
{
    int i;
    int eng[3] = {8,2,5};
    int mat[3] = {3,6,7};
    int m_e,m_m;
    
    for(i=0;i<3;i++){    
    printf("[%d] 英語：%d  数学：%d\n",i+1,eng[i],mat[i]);
    }

    m_e = max(eng,3);
    m_m = max(mat,3);
    printf("英語の最高点：%d\n",m_e);
    printf("数学の最高点：%d\n",m_m);

    return 0;

}
