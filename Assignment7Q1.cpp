#include <iostream>
using namespace std;
 class college {
   public:
   string name = "Rajeev";
 };
   class student : public college {
   public:
   int roll = 54;
   };
int main() {
     student s1;
     cout<<"Name: "<<s1.name<<endl;
     cout<<"Roll: "<<s1.roll<<endl;
    return 0;
}
