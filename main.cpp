#include<iostream>
using namespace std;
int getLength(string s)
{
    if(s[0]=='\0')
        return 0;
    string a = s.substr(1);
    return 1+getLength(a);
}
int main()
{
    string s = "123456789";
    cout<<"find me length :"<<getLength(s);
}