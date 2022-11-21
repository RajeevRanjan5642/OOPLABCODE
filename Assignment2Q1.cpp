//WAP in C++ for Fibonacci series using recursive function
#include<iostream>
using namespace std;

int fib(int num){
    if(num<=1){
        return num;  //base case
    }
    else{
        return fib(num-1)+fib(num-2);  //Recursion i.e. calling itself again and again
    }
}

int main(){
    int n;
    cout<<"Enter the number of terms:";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<fib(i)<<" ";
    }
    cout<<endl;
    return 0;
}
