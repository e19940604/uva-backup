#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>

using namespace std;

int main(){

	int n;
	cin >> n;
	while( n-- ){
		int m;
		int digits[9];
		int count = 0;
		cin >> m;
		int origin = m;
		for( int i = 9 ; i >= 2 ; i--){
			if( m%i == 0 ){
				digits[count++] = i;
				m = m/i;
				i++;
			}
		}

		m = 1;

		for( int i = 0 ; i < count ; i++){
			m*=digits[i];
		}

		if( m != origin )
			count = 0;

		if( origin == 1 )
			cout << "1" << endl;
		else if(count == 0  )
			cout << "-1" << endl;
		else{
			for( int i = count-1 ; i >= 0 ; i--)
				cout << digits[i];
			cout << endl;
		}

	}

	return 0;

}