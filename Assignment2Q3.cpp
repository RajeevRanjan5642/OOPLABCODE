//C++ program to convert binary to octal

#include<iostream>
#include<cmath>
using namespace std;

int binary_octal(long long);
int binary_octal(long long binaryNo){
    long long decimalNo = 0;
    int count = 0;
    //binary to decimal conversion
    while(binaryNo!=0){
    decimalNo+=(binaryNo%10)*pow(2,count);
    binaryNo/=10;
    count++;
    }
    count = 1;
    long long octalNo = 0;
    //decimal to octal conversion
    while(decimalNo!=0){
    octalNo+=(decimalNo%8)*count;
    decimalNo/=8;
    count*=10;
    }
    return octalNo;
}


int main(){
    long long binaryNo;
    cout<<"Enter a Binary number:";
    cin>>binaryNo;
    cout<<"The octal form of "<<binaryNo<<":"<<binary_octal(binaryNo);
    return 0;
}
