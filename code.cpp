// CODE TO CALCULATE THE HYPOTENUS SIDE OF TRIANGE BY USING PYTHAGORAS FORMULA   -->

#include<iostream>
#include<cmath>
using namespace std;
int main(){

double h,p,b;
cout<<"enter the perpendicular and base side of your triangle to calculate hypotenuse: "<<"\n";
cin>>p>>b;

h = sqrt(pow(p,2)+pow(b,2));
cout<<"The hypotenuse of your triangle is: "<<h<<" units";
return 0;
}
