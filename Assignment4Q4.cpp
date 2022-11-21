//Write a C++ program to add two objects using binary plus(+) operator overloaing
// C++ program to add two objects using binary
// plus (+) operator overloading

#include <iostream>
using namespace std;

class NUM {
private:
    int n;

public:

    void getNum(int x)
    {
        n = x;
    }

    void displayNum(void)
    {
        cout << "sum is: " << n;
    }

    NUM operator+(NUM& obj)
    {
        NUM x;
        x.n = this->n + obj.n;
        return (x);
    }
};

int main()
{
    NUM num1, num2, sum;
    num1.getNum(10);
    num2.getNum(20);

    // add two objects
    sum = num1 + num2;

    sum.displayNum();
    cout << endl;

    return 0;
}
