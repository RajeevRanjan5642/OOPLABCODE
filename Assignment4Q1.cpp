//WAP in C++ to add two distances using binary plus(+)operator overloading.

#include <iostream>
using namespace std;

class Distance {
private:
    int feet, inches;
public:
    void getDistance(void)
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void displayDistance(void)
    {
        cout << "Feet:" << feet << "\t"<< "Inches:" << inches << endl;

    }
    Distance operator+(Distance& dist1)
    {
        Distance temp; // to add two distances
        temp.inches = inches + dist1.inches;
        temp.feet = feet + dist1.feet + (temp.inches / 12);
        temp.inches = temp.inches % 12;
        return temp;
    }
};

int main()
{
    Distance D1, D2, D3;

    cout << "Enter first  distance:" << endl;
    D1.getDistance();
    cout << endl;

    cout << "Enter second distance:" << endl;
    D2.getDistance();
    cout << endl;

    // add two distances
    D3 = D1 + D2;

    cout << "Total Distance:" << endl;
    D3.displayDistance();
    cout << endl;

    return 0;
}
