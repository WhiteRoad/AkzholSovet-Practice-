#include <iostream>
#include <cmath>
#include <cstring>
#include<cstdio>
#include<algorithm>
using namespace std;


int main()
{
    int count = 0;
    for ( int i = 100000 ; i <= 999999 ; i++ )
    {
    int a1 = i % 10;
    int a2 = ( i / 10 ) % 10;
    int a3 = ( i / 100 ) % 10;
    int a4 = ( i / 1000 ) % 10;
    int a5 = ( i / 10000 ) % 10;
    int a6 = i / 10000;
        
        int sum = a1 + a2 + a3 + a4 + a5 + a6;
        
        if ( sum % 13 == 0 and (sum+1) % 13 == 0 )
        {
            count++;
        }
    }
    
    if ( count > 0 )
    {
        cout << "Yes" << " " ;
    }
    else cout << "No" << " " ;
    
    return 0;
}


