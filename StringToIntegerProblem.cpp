#include<iostream>
using namespace std;
void fun(char s[])
{
  cout<<s[0];
}
void fun1(char s[])
{
    cout<<s[0];
}
int main()
{
    char s[] = "1234";
    fun(s+2);
    fun1(s);
}