#include <iostream>
#include <cmath>
#include <cstring>
#include<cstdio>
#include<algorithm>
using namespace std;


int main()
{
    for ( int i = 100; i <= 999; i++ )
    {
        int a1 = i % 10;
        int a2 = (i/10) % 10;
        int a3 = (i/100);
        
        int sumkub = pow(a1,3) + pow(a2,3) + pow(a3,3);

        if ( i == sumkub )
        {
            cout << i  << " " ;
        }
    }
    
    return 0;
}
