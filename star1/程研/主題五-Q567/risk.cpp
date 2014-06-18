#include<iostream>
#include<stdio.h>
#include<queue>
#include<vector>
#include<cstdio>
using namespace std;


struct info
{
    int id;
    int step;
};

int main()
{
    freopen("123.txt","r",stdin);
    int n;
    int counter=0;


    while( scanf("%d",&n) != EOF  )
    {

        counter++;
        vector<int>node[21];
        int side,node_num=1;
        int attack;

        for(int i=0;i<n;i++)
        {
            scanf("%d", &side);
            node[node_num].push_back(side);
            node[side].push_back(node_num);
        }
        node_num++;

        while(node_num<20)
        {
            scanf("%d",&n);

            for(int i=0;i<n;i++)
            {
                scanf("%d", &side);
                node[node_num].push_back(side);
                node[side].push_back(node_num);
            }
            node_num++;
        }

        /*for(int i=1 ; i<=20 ; i++)
        {
            printf("node[%d]:" , i);
            for(int j=0; j<node[i].size() ; j++)
                printf(" %d",node[i][j]);
            printf("\n");
        }*/


        scanf("%d",&attack);
        printf("Test Set #%d\n",counter);
        while(attack--)
        {
            int start,target;
            scanf("%d %d" ,&start ,&target);

            info current,next;

            bool visit[21]={false};
            //printf("[%d %d]\n",start,target);
            queue<struct info>BFS;
            current.id = start;
            current.step = 0 ;
            BFS.push(current);
            while(!BFS.empty())
            {
                current = BFS.front();

                BFS.pop();

                for(int i=0;i<node[current.id].size();i++)
                {

                    next.id = node[current.id][i];
                    next.step = current.step+1;

                    if(next.id == target)
                        goto fuck;

                    if( !visit[next.id] )
                    {
                        visit[next.id]= true;
                        BFS.push(next);
                    }
                }
            }
            fuck:
            printf("%2d to %2d:%2d\n",start,target,next.step);
        }
        printf("\n");
    }
    return 0;
}
