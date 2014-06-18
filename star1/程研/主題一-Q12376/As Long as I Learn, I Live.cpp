#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
    //freopen("123.txt","r",stdin);
    int n;
    scanf("%d",&n);
    for(int s=1;s<=n;s++)
    {
        int point,edge;
        int value[100];
        int sum=0;
        int position=0,next;
        vector<int>node[100];

        scanf("%d %d",&point,&edge);
        for(int i=0 ; i<point ; i++)
            scanf("%d",&value[i]);

        for(int i=0 ; i<edge ; i++)
        {
            int start,fin;
            scanf("%d %d",&start,&fin);
            node[start].push_back(fin);
        }

        /*for(int i=0 ; i<point ; i++)
        {
            printf("node[%d](%d) ->" , i , value[i]);
            for(int j=0 ; j<node[i].size() ; j++)
                printf("[%d](%d) ", node[i][j] , value[ node[i][j] ]);
            puts("");
        }*/

        while( node[position].size() )
        {
            int tmp=0;
            for(int i=0 ; i<node[position].size() ; i++)
            {
                if( tmp < value[ node[position][i] ] )
                {
                    tmp = value[ node[position][i] ];
                    next = node[position][i];
                }
            }
            sum += tmp;
            position = next;
        }

        cout << "Case " << s <<  ": " << sum << " " << position << endl;

    }
    return 0;
}
