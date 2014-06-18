#include<iostream>
using namespace std;

int cycle_lenth(int);

int main(){

    int a,i,j,k;
    int cycle,big;

    while(cin>>i>>j)
    {
        big = 0;
        cout << i << " " << j << " ";

        if(i>j)
        {
            k=i;
            i=j;
            j=k;
        }
        for( a=i;a<=j;a++)
        {
            cycle = cycle_lenth(a);
            if(cycle>big)
                big = cycle;
        }
        cout << big << endl;
    }
    return 0;
}

int cycle_lenth(int a){

    int n=1;

   while(a!=1)
    {
        if(a%2==0)
            a= a/2;
        else
            a=3*a+1;
    ++n;
    }
    return n ;
}
