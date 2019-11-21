#include<iostream>
#include<cmath>
using namespace std;
int main(){
double s=1,n;
cin>>n;
for(int i=2;i<=n;i++){
    s=s+1.0/i;}
cout<<s;
return 0;
}
