#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;


int main()
{
    string str;
    while( getline(cin,str) )
    {
        int space;
        int fin = 0;
        unsigned int i ;
        bool flag = true;
        space = str.find(" ");
        string s,t;

        s = str.substr(0,space);
        t = str.substr(space+1);

        for(  i = 0 ; i < s.length() ; i++)
        {
            fin = t.find( s.at(i));
            if( fin < 0)
            {
                flag = false;
                break;
            }
            t = t.substr(fin +1 );
        }


        if( flag )
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
