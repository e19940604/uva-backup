#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<cstring>
#define PI  4*atan(1)
using namespace std;

int main()
{
    int n;
    cin >> n;
    while( n-- )
    {
        int e,f,c;
        int sum = 0;
        cin >> e >> f >> c;
        e += f;
        while( e/c )
        {
            sum += e/c;
            e = e/c + e%c;
        }

        cout << sum << endl;
    }
}
