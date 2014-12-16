#include<iostream>
#include<queue>
#include<cstdio>
#include<cstring>
#define NUM 4
using namespace std;
struct node{
	char n[5];
	int step;
};
bool cmp( node a , node b );

int get_num( node a ){
	int x = 1000 * ( a.n[0] - '0' ) + 100 * ( a.n[1] - '0') + 10 * ( a.n[2] - '0' ) + a.n[3] - '0';
	return x;
}

bool cmp( node a , node b ){
	return ( a.n[0] == b.n[0] && a.n[1] == b.n[1] && a.n[2] == b.n[2] && a.n[3] == b.n[3] );
}

int main(){
	freopen("a.txt","r",stdin);
	// total testcase
	int testcase;
	char c;
	scanf("%d%c", &testcase , &c );

	while( testcase-- ){
		queue< node > bfs_q;	// the queue for bfs
		node start;				// start number
		node end;				// end number
		int forbidden_case;		// the total of  forbidden access number
		bool isFind = false;	// check if find the path
		bool arrived[10000];

		for( int i = 0 ; i < 10000 ; i++ )
            arrived[i] = false;

		for( int i = 0 ; i < NUM ; i++ )
			scanf( "%c%c" , &start.n[i] , &c );
		start.n[NUM] = '\0';
		start.step = 0;
		//puts( start.n );

		for( int i = 0 ; i < NUM ; i++ )
			scanf( "%c%c" , &end.n[i] , &c );
		end.n[NUM] = '\0';
		//puts( end.n );

		scanf( "%d%c" , &forbidden_case , &c );
		node forbidden[forbidden_case];

		for( int i = 0 ; i < forbidden_case ; i++ ){
			for( int j = 0 ; j < NUM ; j++){
				scanf( "%c%c" , &forbidden[i].n[j] , &c );
			}
			forbidden[i].n[NUM] = '\0';
			arrived[ get_num( forbidden[i] ) ] = true;
		}
		
		if( arrived[ get_num( start ) ]  )
			goto END;

		// bfs start
		bfs_q.push( start );

		while( !bfs_q.empty() ){
			node current = bfs_q.front();

			//puts( current.n );
			if( cmp( current , end ) ){
				end.step = current.step;
				isFind = true;
				break;
			}

			for( int i = 0 ; i < NUM ; i++ ){
				int fix[2] = { 1 , -1 };
				for( int j = 0 ; j < 2 ; j++ ){
					node tmp = current;

					if( tmp.n[i] == '0' && j == 1 )
						tmp.n[i] = '9';
					else if( tmp.n[i] == '9' && j == 0 )
						tmp.n[i] = '0';
					else
						tmp.n[i] = (int)tmp.n[i] + fix[j];

					int tmp_num = get_num( tmp );

					if ( arrived[ tmp_num ] == true ){
						continue;
					}

					tmp.step = current.step + 1;
					bfs_q.push( tmp );

					arrived[ get_num( tmp ) ] = true;
				}
			}
			bfs_q.pop();
		}

		
END:		
		if( isFind == false )
			end.step = -1;

		printf("%d\n" , end.step );

		if( testcase != 0 )
			scanf("\n");
	}
}
