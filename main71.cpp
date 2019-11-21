#include <iostream>
#include <cmath>
using namespace std;
int main(){
int h,m,a;
cin>>h>>m;
//1 мин - 6 градусов
a=(h*60-m)*6;
cout<<a;
return 0;
}
