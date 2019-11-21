#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,c,x1,x2;
cin>>a>>b>>c;
double d=pow(b,2)-(4*a*c);
if (d>0){
    x1=((((-1)*b)+sqrt(d)))/(a*2);
    x2=((((-1)*b)-sqrt(d)))/(a*2);
    cout<<"x1="<<x1<<", x2="<<x2;}
else if (d==0){
    cout<<(((-1)*b)/2*a);}
else if (d<0){
    cout << "No solution" << "\n";}
return 0;
}
