// Number of Digits
// Send Feedback
// Given the number 'n', find out and return the number of digits present in a number recursively.
// Input Format :
// Integer n
// Output Format :
// Count of digits
// Constraints :
// 1 <= n <= 10^6
// Sample Input 1 :
//  156
// Sample Output 1 :
// 3
// Sample Input 2 :
//  7
// Sample Output 2 :
// 1

// // 1 iteration
// #include<iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cout<<"Enter the number ";
//     cin>>number;
//     int rem;
//     int count = 0;

//    // for(int i = number ;i!=0;i=i/10)
//    if(number==0)
//     count = 1;
//     while(number!=0)
//     {
//         number=number/10;

//         count++;
//     }    
//     cout<<"Solution : "<<count<<endl;
//     return 0;
// }


// 2 Recursion
#include<iostream>
using namespace std;
int findAnswer(int n)
{
    // base condition
    if(n<10)
        return 1;
       
    // smallCalculation
    int smallCalculation = findAnswer(n/10);
    int present = 1;


    // recursive call 
    return smallCalculation + present;
    
}

int main()
{
    int number;
    cout<<"Enter the number ";
    cin>>number;
    int number_of_digits = findAnswer(number);
    cout<<"Solution : "<<number_of_digits<<endl;
    return 0;
}