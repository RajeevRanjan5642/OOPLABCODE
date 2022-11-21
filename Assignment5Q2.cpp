//Write a C++ program to find the factorial of a number using copy constructor.

#include<iostream>
using namespace std;
class factorial
{
        private:
        int n, i, facti;
        public:
        factorial(int x)  //copy constructor
        {
                n=x;
                facti=1;
        }
        factorial(factorial &x)
        {
                n=x.n;
                facti=1;
        }
        void calculate()
        {
                for(i=1; i<=n; i++)
                {
                        facti=facti*i;
                }
        }
        void display()
        {
                cout<<"\nFactorial : "<<facti<<endl;

        }
};
int main()
{
        int x;
        cout<<"\nEnter a number : ";
        cin>>x;
        factorial f1(x);
        f1.calculate();
        f1.display();

        factorial f2(f1);  //copy constructor takes an object as an argument.
        f2.calculate();
        f2.display();

        return 0;
}
