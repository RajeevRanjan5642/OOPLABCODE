//C++ program to find Prime Numbers between two numbers
//Prime numbers: The numbers which are divisible by 1 and the number itself. For e.g. 2,3,5,7 etc.
#include<iostream>
using namespace std;

void primeNo(int num){
    int count = 0;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<num<<" ";
    }
}

int main(){
    int a,b;
    cout<<"Enter two numbers(a<b):";
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        primeNo(i);
    }
    return 0;
}

