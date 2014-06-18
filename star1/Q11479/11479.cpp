#include<iostream>
#include<string>
using namespace std;


int main()
{
    long long int a=0,b=0,c=0;
    int n,counter=1;
    cin >> n;

    while(n)
    {
        cin >> a >> b >> c;

        if(a+b<=c||b+c<=a||a+c<=b)
            cout << "Case " << counter << ": " << "Invalid" << endl;
        else if(a==b&&b==c)
            cout << "Case " << counter << ": " << "Equilateral" << endl;
        else if(a==b||b==c||a==c)
            cout << "Case " << counter << ": " << "Isosceles" << endl;
        else
            cout << "Case " << counter << ": " << "Scalene" << endl;

        --n;
        ++counter;
    }

}

