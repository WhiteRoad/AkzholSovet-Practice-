#include<iostream>
#include<cmath>
using namespace std;
int main(){
double a,s,n;
cin>>n;
for(int i=1;i<=n;++i){
    a=i;
    for(int j=i+1;j<=i*2;++j){
        a=a*j;}
        s=s+a;}
cout<<s;
return 0;
}
