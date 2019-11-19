#include <iostream>
#include <cmath>
using namespace std;
int main(){
   int arr[4];
    int mx=0;
    for (int i=0;i<4;i++){
        cin>>arr[i];}
    for (int i=0;i<4;i++)
    {
        if (arr[i]>mx and arr[i]%2==0 ){
            mx = arr[i];}}
    if (!mx){
        cout << "Not found" << "\n";}
    else cout << mx << "\n";
    return 0;
}
