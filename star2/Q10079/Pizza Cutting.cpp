#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int n;
    while( cin >> n && n >= 0)
    {
        long long int a = 1;
        for( int i = 0 ; i < n ; i++)
        {
            a += i+1;
        }
        cout <<a << endl;
    }
}
