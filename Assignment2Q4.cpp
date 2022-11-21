//C++ program to check number can express as sum of prime numbers
#include<iostream>
using namespace std;
int chkPrime(int num) {
   int flag = 1;
   for(int i = 2; i <= num/2; ++i) {
      if(num % i == 0) {
         flag = 0;
         break;
      }
   }
   return flag;
}
int main(){
int num;
   cout << "Enter a number : ";
   cin >> num;
   for(int i = 2; i <= num/2; ++i) {
      if (chkPrime(i)) {
         if (chkPrime(num - i)) {
            cout << num << " = " << i << " + " << num-i << endl;
         }
      }
   }
   return 0;
}
