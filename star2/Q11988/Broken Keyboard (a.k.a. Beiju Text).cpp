#include<cstdio>
#include<cstdlib>
#include<list>
#include<string>
#include<iostream>
using namespace std;

int main(){

    char c;
    list<string> output;
    string tmp;
    bool home = false;

    while( scanf("%c",&c) != EOF ){
        if( c == '[' || c == ']' || c == '\n' ){
            if( home )
                output.push_front( tmp );
            else
                output.push_back( tmp );

            if( c == '[' )
                home = true;
            else if( c == '\n' ){
                list<string>::iterator it;
                for( it = output.begin() ; it != output.end() ; it++ )
                    cout << *it;
                cout << endl;
                output.clear();
            }
            else
                home = false;

            tmp.clear();
        }
        else{
            tmp.push_back(c);
        }
    }
}
