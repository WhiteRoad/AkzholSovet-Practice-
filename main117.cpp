#include <iostream>
#include <cmath>
#include <cstring>
#include<cstdio>
#include<algorithm>
using namespace std;


int main()
{
    int a;
    int sum = 0;
    do
    {
        cin >> a;
        sum += a;
    }
    while ( a != 0 );
    
    cout << sum << "\n";
    
    return 0;
}

