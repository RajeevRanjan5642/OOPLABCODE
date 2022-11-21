//Write a program to enter two numbers and perform the following operation:
/* a.division
   b.multiplication
   c.subtraction
   d.addition  */

#include<iostream>
using namespace std;

int main(){
    double a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    char ch;
    cout<<"Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division:";
    cin>>ch;
    if(ch=='1'|| ch=='2'|| ch=='3'|| ch=='4'){
    switch(ch){
        case '1': cout<<a+b<<endl; break;
        case '2': cout<<a-b<<endl; break;
        case '3': cout<<a*b<<endl; break;
        case '4': cout<<a/b<<endl; break;
    }
    }
    else{
        cout<<"wrong choice"<<endl;
    }
    return 0;
}
