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
        int a1 = i % 10;
        int a2 = (i/10) % 10;
        int a3 = (i/100) % 10;
        int a4 = i/1000;

        if ( a1 == 3 || a2 == 3 || a3 == 3 || a4 == 3 )
        {
            cout << i  << " " ;
        }
    }
    
    return 0;
}
