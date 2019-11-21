#include <iostream>
#include <cmath>
using namespace std;
int main(){
double s=0,a=3;
for(int i=a;i<=111;i=i+2){
	s=s+cos((i/(i+2)));}
cout<<s;
}
