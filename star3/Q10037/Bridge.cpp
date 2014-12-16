#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
using namespace std;

bool _sort( int a  , int  b){
	return a<b;
}

int main(){

	int n;
	char gar;
	scanf("%d%c" , &n ,&gar);
	
	while( n-- ){
		scanf("%c" , &gar);
		int people;
		scanf("%d%c" , &people ,&gar);
		int origin_side[ people ];
		int now = people;

		int total_time = 0;
		int move_array[3 * (people -2 ) + 2];
		int move_index = 0;

		for( int i = 0 ; i < people ; i++){
			scanf("%d%c" , &origin_side[i] , &gar );
		}

		

		if( people != 1 ){
			while( now >= 4 ){
				sort( origin_side , origin_side + now ,  _sort);
				int p1 = origin_side[0];
				int p2 = origin_side[1];
				int f1 = origin_side[now-2];
				int f2 = origin_side[now-1];


				int w1 = p2 + p1 + f2 + p2;
				// case 1
				int w2 = f1 + p1 + f2 + p1;
				// case 2


				if( w1 < w2 ){
					move_array[move_index++]=p1;
					move_array[move_index++]=p2;
					move_array[move_index++]=p1;
					move_array[move_index++]=f1;
					move_array[move_index++]=f2;
					move_array[move_index++]=p2;
					total_time += w1;
				}
				else {
					move_array[move_index++]=p1;
					move_array[move_index++]=f1;
					move_array[move_index++]=p1;
					move_array[move_index++]=p1;
					move_array[move_index++]=f2;
					move_array[move_index++]=p1;
					total_time += w2;
				}
				now -= 2;
			}

			if( now == 3 ){
				move_array[move_index++]=origin_side[0];
				move_array[move_index++]=origin_side[2];
				move_array[move_index++]=origin_side[0];
				move_array[move_index++]=origin_side[0];
				move_array[move_index++]=origin_side[1];
				total_time += origin_side[2] + origin_side[0] + origin_side[1];;
			}
			else if( now == 2 ){
				move_array[move_index++]=origin_side[0];
				move_array[move_index++]=origin_side[1];
				total_time += origin_side[1];
			}

			bool output_two = true;
			int i = 0;

			cout << total_time << endl;

			while( i < move_index ){
				if( output_two ){
					cout << move_array[i++] << " ";
					cout << move_array[i++] << endl;
					output_two = false;
				}
				else{
					cout << move_array[i++] << endl;
					output_two = true;
				}

			}

			if( n != 0 )
				cout << endl;
		}
		else{
			cout << origin_side[0] << endl;
			cout << origin_side[0] << endl;
			if( n != 0 )
				cout << endl;
		}

		
	}
	return 0;
}