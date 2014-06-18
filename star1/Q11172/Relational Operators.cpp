#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,i,j;

    cin >> a;

    while(a)
    {
        cin >> i >> j;
        if(i>j)
            cout << ">" << endl;
        else if(i<j)
            cout << "<" << endl;
        else
            cout << "=" << endl;

        --a;
    }
}
