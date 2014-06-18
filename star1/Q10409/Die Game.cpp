#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

class game
{
    int north;
    int west;
public:
    int top;
    game();
    void next( string dir );
    int state( void );
};

game::game()
{
    top = 1;
    north = 2;
    west = 3;
}

int main()
{
    int n;

    while( cin >> n && n)
    {
        string dir;
        game cube;
        cin.get();
        while( n--)
        {
            getline( cin , dir);
            cube.next( dir );
        }
        cout << cube.state() << endl;
    }


}

void game::next( string dir )
{
    int tmp;
    tmp = top;
    if( dir == "north")
    {
        top = 7 - north;
        north = tmp;
    }
    else if( dir == "west")
    {
        top = 7 - west;
        west = tmp;
    }
    else if( dir == "east")
    {
        top = west;
        west = 7 - tmp;
    }
    else if( dir == "south")
    {
        top = north;
        north = 7 - tmp;
    }

}

int game::state()
{
    return top;
}
