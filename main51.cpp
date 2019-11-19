#include <iostream>
#include <cmath>
using namespace std;
int main(){
int x,y,z;
cin>>x>>y>>z;
if (x==y+z||y==x+z||z==x+y){
    cout <<"Yes";}
else cout <<"No";
return 0;
}

