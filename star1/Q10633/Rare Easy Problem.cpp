#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cctype>
using namespace std;

int main()
{
    long long int n;
    while( cin >> n && n )
    {
        long long int N;
        N = n + n/9;
        if( N % 10 == 0)
            cout << N-1 << " " << N  << endl;
        else
            cout << N << endl;
    }
}
