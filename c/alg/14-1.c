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

int depth_first_search(int start_node,int goal_node)
{
    int i;
    visited[start_node]=1;

    for(i=0;i<NODE;i++)
        if(edge[start_node][i]==1)
        {
            if(visited[i]==1)
                continue;
                printf("SEARCHING PATH:%d - %d\n",start_node+1,i+1);

            if(i==goal_node){
                printf("GOAL FOUND\n");
                return 1;
            }
            if(depth_first_search(i,goal_node)==1)
                return 1;
        }
        return 0;
}

int main()
{
    int start_node=4,goal_node=1;
    //int start_node=1,goal_node=5;
    depth_first_search(start_node-1,goal_node-1);
    return 0;  
}