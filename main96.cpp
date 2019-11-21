#include<iostream>
#include<cmath>
using namespace std;
int main(){
double a,s,n,x=0;
cin>>n;
for(int i=1;i<=n;++i){
    a=1.0/(cos(pow(x,i)));
    s=s+a;}
cout<<s;
return 0;
}
