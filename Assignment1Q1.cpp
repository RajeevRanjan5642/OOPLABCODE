//WAP in C++ to input elements into an integer array and perform the following operation.
//The program must include the features of class and object.
/* a.Display the elements of the array.
   b.Sum the elements of the array.
   c.Find the maximum and minimum elements of an array.
   d.Sort the elements of the array.
   e.Reverse the elements of the array.*/

#include<iostream>
using namespace std;
//class declaration
class arrayOperation{

    private: //access specifier
    int arr[50];
    int n;
    public:
    void getData();
    void displayData();
    void sum();
    void maximum();
    void minimum();
    void sortArray();
    void reverseArray();

};
//member function definition
void arrayOperation :: getData(){
    cout<<"Enter the no. of elements:";
    cin>>n;
    cout<<"Enter the elements of array:"<<endl;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void arrayOperation :: displayData(){
    cout<<"The elements of array are:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void arrayOperation :: sum(){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"The sum of elements of array is:"<<sum<<endl;
}
void arrayOperation :: maximum(){
    int max = 0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[max]){
            max = i;
        }
    }
    cout<<"Maximum element in the array is:"<<arr[max]<<endl;
}
void arrayOperation :: minimum(){
    int min = 0;
    for(int i=1; i<n; i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }
    cout<<"Minimum element in the array is:"<<arr[min]<<endl;
}
void arrayOperation :: reverseArray(){
    cout<<"The reverse array is:"<<endl;
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void arrayOperation :: sortArray(){
    //selection sort
    for(int i=0; i<n; i++){
        int j = i;
        int temp = arr[i];
        int k;
        for(k=i+1; k<n; k++){
            if(arr[k]<arr[j]){
                j=k;
            }
        }
        arr[i]=arr[j];
        arr[j] = temp;
    }
    cout<<"The sorted array is:"<<endl;
    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }
}

int main(){
    //object declaration
    arrayOperation arr1;
    arr1.getData();
    arr1.displayData();
    arr1.sum();
    arr1.maximum();
    arr1.minimum();
    arr1.reverseArray();
    arr1.sortArray();
    return 0;
}
