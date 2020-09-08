#include<stdio.h>
#define NODE 5

int edge[NODE][NODE]={
    {0,1,0,0,1},
    {1,0,1,0,0},
    {0,1,0,1,1},
    {0,0,1,0,1},
    {1,0,1,1,0}
    };

int visited[NODE]={0,0,0,0,0};
int queue[NODE]={0,0,0,0,0};
int qn=0;

void push(int x)
{
    queue[qn++]=x;
}

int pop()
{
    int i;
    int x=queue[0];

    qn--;
    for(i=0;i<qn;i++)
        queue[i]=queue[i+1];
    
    return x;    
}

int breadth_first_search(int start_node,int goal_node)
{
    int x,i;
    push(start_node);
    visited[start_node]=1;

    while(qn>0)
    {
        x=pop();
        for(i=0;i<NODE;i++)
            if(edge[x][i]==1)
            {
                if(visited[i]==1)
                    continue;
                printf("SEARCHING PATH:%d - %d\n",start_node+1,i+1);

                if(i==goal_node){
                    printf("GOAL FOUND\n");
                    return 1;
                }
                if(visited[i]==0){
                    push(i);
                    visited[i]=1;
                }
            }
    }
    return 0;
}

int main()
{
    int start_node=4,goal_node=1;
    //int start_node=1,goal_node=5;
    breadth_first_search(start_node-1,goal_node-1);
    return 0;  
}