//Write a C++ program to count all the vowels in a given string.
#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter the string : ";
    getline(cin,name);
    int count = 0;
    for(int i = 0;i<name.size();i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        {
            count++;
        }
    }
    cout<<"Count : "<<count<<endl;
    return 0;
}