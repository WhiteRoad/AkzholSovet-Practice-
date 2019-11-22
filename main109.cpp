#include <iostream>
#include <cmath>
#include <cstring>
#include<cstdio>
#include<algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;

    if ( n % 2 == 0)
    {
    for ( int i = 0; i < n/2; i++ )
    {
        cout << "*******" << "\n";
        cout << "****" << "\n";
    }
    }
    else if ( n % 2 == 1 )
    {
        for ( int i = 0; i < n/2 ; i++ )
        {
            cout << "*******" << "\n";
            cout << "****" << "\n";
            
        }
        cout << "*******" << "\n";
    }
    
    return 0;
}
