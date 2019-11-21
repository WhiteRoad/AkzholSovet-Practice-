#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double s=0,a=2;
	for(int i=a;i<=10;i++){
		s=s+cos((i/1+i));
	}
	cout<<s;
}
