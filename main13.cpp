#include <iostream>
#include <cmath>
using namespace std;
int main(){
double x,y,a,b;
x=1;
a=0.1;
b=0.2;
y=pow(pow(x,2)+b,1/5)-(pow(b,2)*pow(sin(x+a),3)/x);
cout<<y;
}

