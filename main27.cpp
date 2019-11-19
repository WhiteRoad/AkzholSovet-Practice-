#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b,c;
cin>>a>>b>>c;
a=a+b;
b=c-(a-b);
c=(a-(b-c+a))+(b-c+a)+c; //c=a+b+c
cout<<"a="<<a<<", b="<<b<<", c="<<c;}

