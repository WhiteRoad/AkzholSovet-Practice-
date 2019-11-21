#include <iostream>
#include <cmath>
using namespace std;
int main(){
int day, month, year;
cin>>day>>month>>year;
switch (month){
    case 1: //january
        if (day<=30){
        cout<<"yes";}
        else{
        cout<<"no";}
        break;
    case 2: //february
        if (day<=28 ){
        cout<<"yes";}
        else{
        cout<<"no";}
        break;
    case 3: //march
        if (day<=30){
        cout<<"yes";}
        else{
        cout<<"no";}
        break;
    case 4: //april
        if (day<=30){
        cout<<"yes";}
        else{
        cout<<"no";}
        break;
    case 5: //may
         if (day<=30){
        cout<<"yes";}
        else{
        cout<<"no";}
        break;
    case 6: //june
        if (day<=30){
        cout<<"yes";}
        else{
        cout<<"no";}
        break;
    case 7: //july
        if (day<=30){
        cout<<"yes";}
        else{
        cout<<"no";}
        break;
    case 8: //august
        if (day<=30){
        cout<<"yes";}
        else{
        cout<<"no";}
        break;
    case 9: //september
        if (day<=30){
        cout<<"yes";}
        else{
        cout<<"no";}
        break;
    case 10: //october
        if (day<=30){
        cout<<"yes";}
        else{
        cout<<"no";}
        break;
    case 11: //november
        if (day<=30){
        cout<<"yes";}
        else{
        cout<<"no";}
        break;
    case 12: //Декабрь
        if (day<=31){
        cout<<"yes";}
        else{
        cout<<"no";}
        break;
    default:{
        cout<<"no";}
        break;}
}
