#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
    int q;
    string foo;
    char bar[100000];

    cin >> bar;


    while(bar)
    {
        int a,i,odd=0,even=0;

        foo=bar;

        a=foo.length();

        for(i=0;i<a;i++)
        {
            if(i%2==0)
                even+=(int)bar[i]-48;
            else
                odd+=(int)bar[i]-48;
        }

        if(even==0&&odd==0)
            break;
        else if((even-odd)%11==0 )
            cout << bar <<" is a multiple of 11." << endl;
        else
            cout << bar << " is not a multiple of 11." << endl;

        cin >> bar;


    }

}


