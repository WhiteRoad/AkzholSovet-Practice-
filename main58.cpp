#include <iostream>
#include <cmath>
using namespace std;
int main() {
double day1,month1,year1,day2,month2,year2;
cout<<"Input first date dd-mm-yy"<<"\n";
cin>>day1>>month1>>year1;
cout<<"Input second date dd-mm-yy"<<"\n";
cin>>day2>>month2>>year2;
if(year1<=year2 and month1<=month2 and day1<day2){
    cout<<"yes";}
else if (year1==year2 and month1==month2 and day1==day2){
    cout<<"The same date";}
else cout<<"no";
return 0;
}
