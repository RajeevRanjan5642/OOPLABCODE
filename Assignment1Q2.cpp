//WAP to enter data of 3 employees and display them using class and objects.

#include<iostream>
#include<string>
using namespace std;
class employee{
private:
    string firstName;
    string lastName;
    int age;
    double salary;

public:
    void getData();
    void putData();
};
//member function definition:
void employee :: getData(){
    cout<<"Enter First Name:";
    cin>>firstName;
    cout<<"Enter Last Name:";
    cin>>lastName;
    cout<<"Enter age:";
    cin>>age;
    cout<<"Enter salary:";
    cin>>salary;
}
void employee :: putData(){
    cout<<"First Name:"<<firstName<<endl;
    cout<<"Last Name:"<<lastName<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Salary:"<<salary<<endl;
}
int main(){
    employee e[3];
    for(int i=0; i<3; i++){
        cout<<"Enter the details of Employee "<<i+1<<":"<<endl;
        e[i].getData();
        cout<<endl;
    }
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Display the details of Employees:"<<endl;
    for(int i=0; i<3; i++){
        e[i].putData();
        cout<<endl;
    }
   return 0;
}
