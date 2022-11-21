#include <iostream>
using namespace std;

// create add class
class add
{
    public:
        int x = 15;
        int y = 25;
        void sum()
        {
            cout << " The sum of " << x << " and " << y << " is " <<x+y << endl;
        }
};

// create Mul class
class Mul
{
    public:
        int a = 20;
        int b = 10;
        void mul()
        {
            cout << " The Multiplication of " << a << " and " << b << " is " <<a*b << endl;
        }
};

// create Subclass
class Sub
{
    public:
        int a = 40;
        int b = 20;
        void sub()
        {
            cout << " The Subtraction of " << a << " and " << b << " is " <<a-b << endl;
        }
};

// create Div class
class Div
{
    // access specifier
    public:
        int a = 120;
        int b = 60;
        void div()
        {
            cout << " The Division of " << a << " and " << b << " is " <<a/b << endl;
        }
};

// create a derived class to derive the member functions of all base classes
class derived: public add, public Div, public Sub, public Mul
{
    // access specifier
    public:
        int p = 12;
        int q = 10;
        void mod()
        {
            cout << "The Modulus of " << p << " and " <<q << " is " << p % q << endl;
        }
};

int main ()
{
    // create an object of the derived class
    derived dr;
    dr.mod(); // call derive class member function
    // call all member function of class add, Div, Sub and Mul
    dr.sum();
    dr.mul();
    dr.div();
    dr.sub();
    return 0;
}
