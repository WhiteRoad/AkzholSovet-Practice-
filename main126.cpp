#include <iostream>
#include <cmath>
#include <cstring>
#include<cstdio>
#include<algorithm>
using namespace std;


int main()
{
    int a ;
    cin >> a;
    
    for ( int i = 1 ; i < a ; i++ )
    {
        if ( a % i == 0)
        {
            cout << i << " " ;
        }
    }
    
    return 0;
}