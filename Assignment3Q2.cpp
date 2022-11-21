//WAP to input a single digit number and print a rectangle form of 6 rows and 4 columns
/*
    5 5 5 5
    5     5
    5     5
    5     5
    5     5
    5 5 5 5  */

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter a number:";
    int num;
    cin>>num;
    for(int i=1; i<=6; i++){
        for(int j=1; j<=4; j++){
            if(i==1 || i==6 || j==1 || j==4){
                cout<<num<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
