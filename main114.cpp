#include <iostream>
#include <cmath>
#include <cstring>
#include<cstdio>
#include<algorithm>
using namespace std;


int main()
{

    for ( int i = 1 ; i <= 30; i++ )
    {
        if ( i % 2 != 0)
        {
            for ( int j = 1 ; j <= i; j++ )
            {
                cout << j ;
            }
            cout << "\n";
        }
        else if ( i % 2 == 0)
        {
            cout << 11111 << "\n" ;
        }
    }
    return 0;
}

