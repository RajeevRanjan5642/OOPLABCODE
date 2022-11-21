//WAP to input an array of integer having 5elements. Find the sum,largest and smallest element.

#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter 5 elements:";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int sum = 0;
    //sum
    for(int i=0; i<5; i++){
        sum += arr[i];
    }
    cout<<"Sum of the elements is"<<" "<<sum<<endl;
    //max element
    int max = 0;
    for(int i=1; i<5; i++){
        if(arr[i]>arr[max]){
            max = i;
        }
    }
   cout<<"Largest element is"<<" "<<arr[max]<<endl;
   //min element
   int min = 0;
   for(int i=1; i<5; i++){
    if(arr[i]<arr[min]){
        min = i;
    }
   }
   cout<<"Smallest element is"<<" "<<arr[min]<<endl;

   return 0;

}
