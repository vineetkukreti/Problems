//Check Number sequence
//You are given S, a sequence of n integers i.e. S = s1, s2, ..., sn. Compute if it is possible to split S into two parts : s1, s2, ..., si and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the first part is strictly decreasing while the second is strictly increasing one.
//Note : We say that x is strictly larger than y when x > y.
//So, a strictly increasing sequence can be 1 4 8. However, 1 4 4 is NOT a strictly increasing sequence.
//
//
//That is, in the sequence if numbers are decreasing, they can start increasing at one point. And once the sequence of numbers starts increasing, they cannot decrease at any point further.
//Sequence made up of only increasing numbers or only decreasing numbers is a valid sequence. So, in both the cases, print true.
//
//
//You just need to print true/false. No need to split the sequence.
//Input format :
//Line 1 : Integer 'n'
//Line 2 and Onwards : 'n' integers on 'n' lines(single integer on each line)
//Output Format :
//"true" or "false" (without quotes)
//Constraints :
//1 <= n <= 10^7
//Sample Input 1 :
//5
//9
//8
//4
//5
//6
//Sample Output 1 :
//true
//Sample Input 2 :
//3
//1
//2
//3
//Sample Output 2 :
//true
//Sample Input 3 :
//3
//8
//7
//7
//Sample Output 3 :
//false
//Explanation for Sample Format 3 :
//8 7 7 is not strictly decreasing, so output is false.
//Sample Input 4 :
//6
//8
//7
//6
//5
//8
//2
//Sample Output 4 :
//false
//Explanation for Sample Input 4 :
//The series is :
//8 7 6 5 8 2
//It is strictly decreasing first (8 7 6 5). Then it's strictly increasing (5 8). But then it starts strictly decreasing again (8 2). Therefore, the output for this test case is 'false'
//
//
//

#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int iflag ;
    int dflag ;
    // cout<<iflag<<" "<<dflag<<endl;
   
    for(int i = 1;i<n;i++)
    { 
        if(a[i]>a[i-1])
        {
           iflag=0;
            
        }
        else
        { 
           
            iflag = 1;
            break;
        }
    }  
   
    
   
     
    for(int i = 1;i<n;i++)
    { 
        if(a[i]<a[i-1])
        {
            
            dflag = 0;
        }
        else
        { 
            dflag = 1;
          
            break;
        }
    }  
    int iiflag,ddflag; 
   for(int i = 1;i<n;i++)
   {
       if(a[i]<a[i-1]&&ddflag!=1&&iiflag!=0)
       {
           ddflag=0;
       }
       else
       {
           
           if(a[i]>a[i-1])
           {
               iiflag = 0;
           }
           else
           {
               ddflag = 1;
               iiflag=1;
           }
       }
   }
    
    if(dflag==0&&iflag==1)
        cout<<"true";
   else if(dflag==1&&iflag==0)
        cout<<"true";
    else
        if(iiflag==0&&ddflag==0)
        cout<<"true";
    else
        cout<<"false";
    return 0;
	
}

