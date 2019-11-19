#include <iostream>
#include <cmath>
using namespace std;
int main(){
double x,y;
x=3.6;
y=exp(x-2)+abs(sin(x))-(pow(x,4)*cos(1/x));
cout<<y;
}

