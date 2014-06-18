#include<stdio.h>
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
void DFS(int now , vector<char> digit[26] , bool visit[26]);

int main()
{
    //freopen("123.txt","r",stdin);
    int n;
    char c;
    bool co=true;
    scanf("%d",&n);
    scanf("%c%c",&c,&c);

    while(n--)
    {
        bool visit[26]= {false};
        vector<char> digit[26];
        char max_char;
        char in[3];
        int counter=0;
        scanf("%c",&max_char);
        scanf("%c",&c);

        while( gets(in) != NULL )
        {
            //printf("%s\n",in);
            if( in[0] == '\0' )
            {
                //printf("%s\n",in);
                break;
            }

            else
            {
                digit[in[0]-'A'].push_back(in[1]);
                digit[in[1]-'A'].push_back(in[0]);
            }
        }
        for(int i=0; i<=max_char-'A';i++)
        {
            if(!visit[i])
            {
                DFS( i , digit , visit );
                counter++;
            }
        }

        if(co)
            {
                cout << counter << endl;
                co = false;
            }

        else
            cout << endl << counter << endl;
    }

    return 0 ;
}

void DFS(int now , vector<char> digit[26] , bool visit[26])
{
    visit[now] = true;
    for(int i=0;i<digit[now].size();i++)
    {
        if(!visit[ digit[now][i]-'A'] )
            DFS( digit[now][i]-'A' , digit , visit );
    }
}
