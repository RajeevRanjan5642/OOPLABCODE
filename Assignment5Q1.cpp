//C++ program to display Student Details using constructor and destructor.

#include<iostream>
using namespace std;

class student
{
                private:
                    char name[20];
                    long roll;

                public:
                    student();//Constructor Declaration
                    ~student();//Destructor Declaration
                     void read();
                     void display();
};

student :: student() //Constructor definition
{
        cout<<"\nStudent Details Constructor"<<endl;
}

void student :: read()
{
        cout<<"Enter the student's name : ";
        cin>>name;
        cout<<"Enter the student's roll no. : ";
        cin>>roll;

}

void student :: display()
{
    cout<<"Student Details :-\n";
        cout<<"Student's Name : "<<name<<endl;
        cout<<"Student's Roll No.: "<<roll<<endl;

}

student :: ~student()
{
        cout<<"\nStudent Detail is Closed"<<endl;
}


int main()
{
    student st;
    st.read ();
    st.display ();

    return 0;
}
