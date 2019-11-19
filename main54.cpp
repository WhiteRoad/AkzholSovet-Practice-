#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if (a<5 and b<5){
    cout <<"Yes";}
else if (a<5 and c<5){
cout <<"Yes";}
else if (c<5 and b<5){
cout <<"Yes";}
else cout <<"No";
return 0;
}

