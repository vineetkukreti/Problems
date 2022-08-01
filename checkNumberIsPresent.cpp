// Check Number
// Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
// Do this recursively.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x
// Output Format :
// 'true' or 'false'
// Constraints :
// 1 <= N <= 10^3
// Sample Input 1 :
// 3
// 9 8 10
// 8
// Sample Output 1 :
// true
// Sample Input 2 :
// 3
// 9 8 10
// 2
// Sample Output 2 :
// false


#include<iostream>
using namespace std;
bool FindNumber(int a[],int x,int n)
{
//     if(n==0 && a[n]==x)
//     return true;
//     else false;
//    bool output;
//    if(a[n-1]==x)
//       output = true;
//     else 
//     output = false;
//     bool smallCalculation = FindNumber(a,x,n-1);
//    return smallCalculation || output;

    if(n==0)
       return false;
     if(a[n-1]==x)
       return true;
    else 
      return FindNumber(a,x,n-1);

    
}
int main()
{
    int n;
    cout<<"Enter the number ";  
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }

   int x ;
   cout<<"Enter the required element to search : ";
   cin>>x;
    bool answer = FindNumber(a,x,n);
    cout<<"Number is present (true/false) : "<<answer<<endl;
    return 0;
}