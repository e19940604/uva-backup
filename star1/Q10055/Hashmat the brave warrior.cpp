#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    long long int a,b;
    while( cin >> a >> b)
    {
        long long int ans;
        a>b ? ans=a-b : ans = b-a;
        cout << ans << endl;
    }
}
