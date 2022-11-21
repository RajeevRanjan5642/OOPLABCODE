#include <iostream>
using namespace std;


class patient
{
      private:
                       char name[50];
                       char number [50];
                       char disease[50];
      public:
                    void getdata()
                     {
                          cout<<"Enter patient's name : ";
                          cin>>name;
                          cout<<"Enter disease : ";
                          cin>>disease;
                          cout<<"Enter Bed No. : ";
                          cin>>number;
                      }
                     void showdata()
                      {
                           cout<<"\nPatient's Name : "<<name<<endl;
                           cout<<"\nDisease : "<<disease<<endl;
                           cout<<"\nBed No. : "<<number<<endl;
                       }
};

class amount
{
        private:
                              int dues;
                              patient pat;
        public:
                        void getdata()
                          {
                               pat.getdata();
                               cout<<"Enter Dues of Patient : ";
                               cin>>dues;
                           }
                         void showdata()
                           {
                               pat.showdata();
                               cout<<"\nTotal Dues of Patient : "<<dues;
                            }
};
   int main()
       {
                  amount a1;
                  cout<<"\nEnter Data : "<<endl;
                  a1.getdata();
                  cout<<"\nInserted Data is : "<<endl;
                  a1.showdata();
                 return 0;
        }
