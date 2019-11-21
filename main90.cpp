#include <iostream>
#include <cmath>
using namespace std;
double s=0,a=3;
int main(){
	for(int i=a;i<=111;i=i+2){
		s=s+cos((i/(i+2)));
	}
	cout<<s;
}
