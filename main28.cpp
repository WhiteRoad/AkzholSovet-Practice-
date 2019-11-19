#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b,n; //a - summa vklada, b - godovoi procent, n - number of years
cin>>a>>b>>n;
cout<<"Summa cherez "<<n<<" let = "<< a*pow(1+b/100, n);}

