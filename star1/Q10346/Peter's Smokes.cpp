#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<cstring>
#define PI  4*atan(1)
using namespace std;

int main()
{
    int e,c;
    while( cin >> e  >> c )
    {
        int sum = e;
        while( e/c )
        {
            sum += e/c;
            e = e/c + e%c;
        }

        cout << sum << endl;
    }
}
