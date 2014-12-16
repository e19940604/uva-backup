#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
using namespace std;

int main(){

	string one;
	

	while( getline( cin , one ) ){
		int counter = 0;
		int i;
		stack<char> stk;
		bool flag = true;

		for( i = 0 ; i < one.length() ; i++ ){
			counter++;

			if( one.at(i) == '[' || one.at(i) == '<' || one.at(i) == '{'  ){
				stk.push( one.at(i) );
			}
			else if( one.at(i) == '(' ){
				if( i+1 < one.length() && one.at(i+1) == '*'){
					stk.push('*');
					i++;
				}
				else
					stk.push(one.at(i));
			}
			else if(one.at(i) == '*' ){
				if( i+1 < one.length() && one.at(i+1) == ')'){
					if( stk.size() != 0 && stk.top() == '*' ){
						stk.pop();
						i++;
					}
					else{
						flag = false;
						break;
					}
				}
			}
			else if(one.at(i) == ']'){
				if( stk.size() != 0 && stk.top() == '[' )
					stk.pop();
				else{
					flag = false;
					break;
				}
			}
			else if(one.at(i) == '>'){
				if( stk.size() != 0 && stk.top() == '<' )
					stk.pop();
				else{
					flag = false;
					break;
				}
			}
			else if(one.at(i) == '}'){
				if( stk.size() != 0 && stk.top() == '{' )
					stk.pop();
				else{
					flag = false;
					break;
				}
			}
			else if(one.at(i) == ')'){
				if( stk.size() != 0 && stk.top() == '(' )
					stk.pop();
				else{
					flag = false;
					break;
				}
			}
		}

		if( flag && stk.size() == 0 ){
			cout << "YES" << endl;
		}
		else{
			if( stk.size() != 0 && flag == true)
				counter++;
			cout << "NO " << counter << endl; 
		}

	}

}