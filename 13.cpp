#include<iostream>
#include<string>
using namespace std;
class Student
{
    int roll_no;
    string name;
    public:
   Student(int roll_no,string name)
    {
        this->roll_no = roll_no;
        this->name = name;
    }
    void display()
    {
        cout<<"\nRoll No : "<<roll_no<<endl;
        cout<<"\nName    : "<<name<<endl;
    }
};
int main()
{
    int n;
    int rollno;
    string namy;
    cout<<"Enter no of student : ";
    cin>>n;
    Student s[n];

    for(int i = 0;i<n;i++)
    {
        cout<<"Enter the roll No = ";
        cin>>rollno;
        cout<<"Enter your name = ";
        cin>>namy;
       s[i] = s(rollno,namy);
    }
}