#include <iostream>
#include <cmath>
#include <cstring>
#include<cstdio>
#include<algorithm>
using namespace std;


int main()
{
    for ( int i = 1000; i <= 9999; i++ )
    {
        int sum = (i % 10) + ((i/10) % 10) + ((i/100) % 10) + (i/1000);
        
        if ( i == 600 * sum )
        {
           cout << i << " "  ;
        }
    }
    cout << endl;
    cout << 1 << endl ;

    return 0;
}
