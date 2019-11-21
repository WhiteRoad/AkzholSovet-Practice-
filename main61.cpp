#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,c,d,e;
cin>>a;
b=a/1000;
c=a%10;
d=a/10%10;
e=a/100%10;
if(b==c||b==d||b==e||c==d||c==e||d==e){
cout<<"yes";}
else cout<<"no";
return 0;
}
