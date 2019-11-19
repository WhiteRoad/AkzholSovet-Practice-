#include <iostream>
#include <cmath>
using namespace std;
int main(){
double x;
cin>>x;
if (x>=2 and x<=5){
    x=x+10;}
else if (x>=7 and x<=40){
    x=x-100;}
else if (x<=0||x>=3000){
    x=x*3;}
else x=0;
cout<<x;
return 0;
}

