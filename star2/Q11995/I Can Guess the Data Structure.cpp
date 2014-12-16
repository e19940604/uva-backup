#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <stack>
#include <queue>
#define MAX 1000
using namespace std;

int main()
{

	int n;
	while( scanf("%d",&n) != EOF )
	{
		stack<int> st;
		queue<int> qu;
		priority_queue<int> pq;

		bool s = true;
		bool q = true;
		bool p = true;

		int option;
		int ans[n];
		int count=0;

		int arr_st[MAX];
		int arr_qu[MAX];
		int arr_pq[MAX];
		for (int i = 0; i < n; ++i)
		{
			int value = 0;
			
			scanf("%d %d",&option,&value);
			if (option == 1 )
			{
				st.push(value);
				qu.push(value);
				pq.push(value);
			}
			else
			{
				if( st.empty() )
				{
					s = false;
					q = false;
					p = false;
				}
				else
				{
					ans[count] = value;
					arr_st[count] = st.top();
					st.pop();
					arr_qu[count] = qu.front();
					qu.pop();
					arr_pq[count++] = pq.top();
					pq.pop();
				}
			}

			
		}


		for (int j = 0; j < count; ++j)
		{
			if( ans[j] != arr_st[j] )
			{
				s = false;
				break;
			}
		}

		for (int j = 0; j < count; ++j)
		{
			if( ans[j] != arr_qu[j] )
			{
				q = false;
				break;
			}
		}

		for (int j = 0; j < count; ++j)
		{
			if( ans[j] != arr_pq[j] )
			{
				p = false;
				break;
			}
		}


		if( ( s && q && p ) || ( s && q) || ( s && p ) || ( q && p ) )
			printf("not sure\n");
		else if( s )
			printf("stack\n");
		else if( p )
			printf("priority queue\n");
		else if( q )
			printf("queue\n");
		else 
			printf("impossible\n");
	}
}