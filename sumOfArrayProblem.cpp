// Sum of Array
// Send Feedback
// Given an array of length N, you need to find and return the sum of all elements of the array.
// Do this recursively.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Output Format :
// Sum
// Constraints :
// 1 <= N <= 10^3
// Sample Input 1 :
// 3
// 9 8 9
// Sample Output 1 :
// 26
// Sample Input 2 :
// 3
// 4 2 1
// Sample Output 2 :
// 7    


// 2 using recursion
#include<iostream>
using namespace std;
int sumOfArray(int a[],int n)
{
    if(n==0)
     return a[0];
     int smallCalculation = sumOfArray(a,n-1);
     int output = a[n];
     return smallCalculation + output;
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
    int sum = sumOfArray(a,n-1);
    cout<<"Sum : "<<sum<<endl;
    return 0;
}