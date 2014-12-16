#include<iostream>
using namespace std;
int fo( int , int);

int main()
{
   int  m,n;

   while(cin >> n >> m && n)
   {
        fo(n,m);
   }
}

int fo( int n, int m)
{
    if(m>n-m)
        m=n-m;

    long long int result=1;
    for(int i=0;i<m;i++)
    {
        result = result*(n-i)/(i+1);
    }
    cout << result << endl;

    return 0;
}

