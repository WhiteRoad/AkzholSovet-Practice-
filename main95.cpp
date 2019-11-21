#include<iostream>
#include<cmath>
using namespace std;
int main(){
double s=0,a,n;
cin>>a>>n;
for(int i=1;i<=n;++i){
    s=s+pow(a+i,2);}
cout<<s;
return 0;
}
