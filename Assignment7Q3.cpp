#include <iostream>
using namespace std;
 class Bird {
   public:
 void eat() {
    cout<<"Eating grains."<<endl;
 }
   };
   class Crow: public Bird
   {
       public:
     void fly(){
    cout<<"Flying in the sky."<<endl;
     }
   };
   class BabyCrow: public Crow
   {
       public:
     void weep() {
    cout<<"Weeping.";
     }
   };
int main(void) {
    BabyCrow c1;
    c1.eat();
    c1.fly();
    c1.weep();
     return 0;
}
