

#include <iostream>
using namespace std;

class Base {
  private:
    int a = 10;

  protected:
    int b = 20;

  public:
    int c = 30;


    int getPvt() {
      return a;
    }
};

class PublicDerived : public Base {
  public:

    int getProt() {
      return b;
    }
};

int main() {
  PublicDerived object1;
  cout << "Private = " << object1.getPvt() << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.c << endl;
  return 0;
}
