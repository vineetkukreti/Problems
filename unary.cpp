#include<iostream>
using namespace std;
class minus
{
    int a;
    public:
    minus(int a)
    {
        this->a = a;
    }
   void display()
   {
       cout<<a<<endl;
   }
};
int main()
{
    minus a(12);
    a.display();

    return 0;

}