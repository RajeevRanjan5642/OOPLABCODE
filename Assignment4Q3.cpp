//WAP in C++ to perform mathematical operations on two objects using binary operator overloading.
//1.Addition
//2.Subtraction
//3.Multiplication
//4.Division

#include <iostream>
using namespace std;
class Arith_num
{

    int num;
    public:

        void input()
        {
            num = 20;
        }

        Arith_num operator + (Arith_num &ob)
        {

            Arith_num A;

            A.num = num + ob.num;
            return (A);
        }

        Arith_num operator - (Arith_num &ob)
        {

            Arith_num A;

            A.num = num - ob.num;
            return (A);
        }

        Arith_num operator * (Arith_num &ob)
        {

            Arith_num A;

            A.num = num * ob.num;
            return (A);
        }

        Arith_num operator / (Arith_num &ob)
        {

            Arith_num A;

            A.num = num / ob.num;
            return (A);
        }

        void print()
        {
            cout << num;
        }
};
int main ()
{
    Arith_num x1, y1, res;
    x1.input();
    y1.input();
    res = x1 + y1;
    cout << " Addition : " ;
    res.print();
    res = x1 - y1;
    cout << " \n \n Subtraction : " ;
    res.print();
    res = x1 * y1;
    cout << " \n \n Multiplication : " ;
    res.print();
    res = x1 / y1;
    cout << " \n \n Division : " ;
    res.print();
    return 0;
}

