#include <iostream>
#include <cmath>
#include <cstring>
#include<cstdio>
#include<algorithm>
using namespace std;


int main()
{
    int a , b ;
    cin >> a >> b ;

    for ( int i = a ; i <= b ; i++ )
    {
        if ( i % 12 == 0 )
        {
            cout << i << " ";
        }
    }
    return 0;
}

