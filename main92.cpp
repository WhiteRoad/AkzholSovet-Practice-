#include<iostream>
#include<cmath>
using namespace std;
int main(){
int sum=0;
for(int i=1;i<=100;i++){
    for(int j=1;j<=i;j++){
        sum=sum+j;
        cout<<i<<" "<<sum<<endl;
        sum=0;}}
}
