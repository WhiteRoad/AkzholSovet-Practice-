#include <iostream>
#include <cmath>
using namespace std;
int main() {
int a;
cin>>a;
if(a%10<a/10%10 and a/10%10<a/100%10 and a/100%10<a/1000%10){
    cout<<"yes";}
else cout<<"no";
return 0;
}
