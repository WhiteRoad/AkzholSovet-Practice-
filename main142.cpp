#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(){
double n,u,i;
n=rand()%100+1;
i=1;
while (i<=3){
cin>>u;
if (u>n) cout<<"Mnogo"<<"\n";
    else if (u < n) cout<<"Malo"<<"\n";
    else cout<<"correct!"<<"\n";
i=i+1;}
if (i=3) cout<<"Looooser "<<n;
return 0;
}
