#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;

int main(){

	int number[26] = {2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864};

	int m;
	char c;
	string newline;
	scanf("%d",&m);
	scanf("%c",&c);
	
	while( m-- ){
		int dataset;
		scanf("%d",&dataset);
		scanf("%c",&c);
		
		int table[dataset];
		string record[dataset];
		
		for( int i = 0 ; i < dataset ; i++ ){
			table[i] = 0;
		}
		
		int count = 0;
		while( count < dataset ){
			getline( cin , record[count]);
			for( unsigned int i = 0 ; i < record[count].length() ; i++ ){
				table[count] += number[ (int)( record[count][i] - 'a' ) ];
			}
			//printf("%d\n" , table[count]);
			count++;
		}
		
		string testcase = "";
		string endcase = "END";
		
		while(true){
			getline( cin , testcase );
			if( testcase.compare(endcase) == 0  )
				break;
			int caseValue = 0;
			int counter = 0;
			for( unsigned int i = 0 ; i < testcase.length() ; i++ ){
				caseValue += number[ (int)( testcase[i] - 'a' ) ];
			}
			
			cout << "Anagrams for: " << testcase << endl;
			for( int i = 0 ; i < dataset ; i++ ){
				if( caseValue == table[i] ){
					counter++;
					cout << "  " << counter << ") " << record[i] << endl;
				}
			}
			
			if( counter == 0 )
				cout << "No anagrams for: " << testcase << endl;
			
		}
		
		if( m != 0 )
			cout << endl;
	}
}
