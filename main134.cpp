#include <iostream>
#include <cmath>
#include <cstring>
#include<cstdio>
#include<algorithm>
using namespace std;


int main() {
    
    int  r , x , y ;
    cin >> r >> x >> y ;
    
    int left = x - r;
    int right = x + r;
    int up = y + r ;
    int down = y - r ;
    int count = 0;
    
    for( x = left; x <= right ; x++ )
    {
        for( y = down ; y <= up ; y++ )
        {
            if( x*x + y*y <= r*r )
                count++;
        }
    }
    cout << count ;
  return 0;
}


