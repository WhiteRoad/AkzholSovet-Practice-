#include <iostream>
#include <cmath>
using namespace std;
int main(){
int  a[3];
for ( int  i=0;i<3;i++){
    cin>>a[i];}
int sum=0;
for (int i=0;i<3;i++ ){
    if (a[i]%5==0 ){
        sum=sum+a[i];}}
    if (sum==0){
        cout<<"Error"<<"\n";}
    else if (sum>0){
        cout<<sum<<"\n";}
return 0;
}

