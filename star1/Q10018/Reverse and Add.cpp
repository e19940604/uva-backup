#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
long long int revers( long long int num );

int main()
{
    int n;
    cin >> n;
    while( n-- )
    {
        int counter = 0;
        long long int num,rev;
        cin >> num;
        rev = revers( num );

        while( num != rev )
        {
            counter++;
            num += rev;
            rev = revers( num );
        }
        cout << counter << " " << rev << endl;
    }

}

long long int revers( long long int num )
{
    long long int ans = 0;
    while( num )
    {
        ans *=10;
        ans += (num%10);
        num /=10;
    }

    return ans;
}
