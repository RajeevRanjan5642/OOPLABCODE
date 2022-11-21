#include <iostream>
using namespace std;
class industry
{
    protected:
                       char name[25];
    public:
                void insert()
                  {
                       cout<<"Enter Your Name : ";
                       cin>>name;
                  }
                void output()
                 {
                       cout<<"\nName : "<<name<<"\n";
                 }
};
class computer: public industry
{
     protected :
                        char education[10];
                        float salary;
     public:
                void insert()
                 {
                       industry:: insert();
                       cout<<"Enter Your Highest Qualification : ";
                       cin>>education;
                       cout<<"\nEnter Your Salary : ";
                       cin>>salary;
                  }
                void output()
                 {
                       industry::output();
                       cout<<"Highest Qualification is : "<<education<<"\n";
                       cout<<"Salary Drawn is : "<<salary<<"\n";
                 }
};
class manager : public industry
{
    protected :
                       int experience;
                       char grade;
   public:
               void insert()
                {
                       industry::insert();
                       cout<<"Your Previous Experience : ";
                       cin>>experience;
                       cout<<"\nYour Grade : ";
                       cin>>grade;
                 }
               void output()
                {
                       industry::output();
                       cout<<"Total Previous Experience : "<<experience<<"\n";
                       cout<<"Your Grade : "<<grade<<"\n";
                 }
};

class soft: public computer
{
   protected :
                     char expert[10];
   public:
             void insert()
              {
                     computer::insert();
                     cout<<"Enter Your Expertise Field : ";
                     cin>>expert;
               }
             void output()
              {
                     computer::output();
                     cout<<"Expertise Field is : "<<expert<<"\n";
              }
};

      int main( )
{
                 soft sl;

                 manager m1;


                 cout<<"Enter the Data for Software Personnel : "<<endl;
                 sl.insert();
                 cout<<"\nInformation of Software Personnel : ";
                 sl.output();

                 cout<<"\nEnter Data for Manager : \n";
                 m1.insert();
                 cout<<"\nManager Information : ";
                 m1.output();

                 return 0;
}
