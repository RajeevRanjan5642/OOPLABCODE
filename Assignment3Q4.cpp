//Write a program in c++ to enter P,T,R and calculate SI

#include<iostream>
using namespace std;
int main(){

    double p,r,t;

    cout<<"Enter principle amount:";
    cin>>p;
    cout<<"Enter rate:";
    cin>>r;
    cout<<"Enter time duration:";
    cin>>t;

    cout<<"The simple interest is:"<<" "<<(p*r*t)/100<<endl;

    return 0;
}
