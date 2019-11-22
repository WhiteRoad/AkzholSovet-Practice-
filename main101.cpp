#include <iostream>
#include <cmath>
#include <cstring>
#include<cstdio>
#include<algorithm>
using namespace std;


int main()
{
    for ( int i = 10000; i <= 99999; i++ )
    {
        int sred = (i/100) % 10;
        int sum = ( i % 10 ) + ((i/10) % 10) + ((i/100)%10) + ((i/1000) % 10) + (i/10000);
        
        if ( i % 2 == 0 and sred % 2 == 1 and sum % 4 == 0)
        {
            cout << i  << " " ;
        }
    }
    
    return 0;
}
