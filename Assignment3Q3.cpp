// WAP to display current date and time

#include<iostream>
#include<ctime>
using namespace std;

int main(){

    time_t ct = time(0);
    string currenttime = ctime(&ct);
    cout<<currenttime;

    return 0;
}
