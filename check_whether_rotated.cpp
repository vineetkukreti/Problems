#include<bits/stdc++.h>
int arrayRotateCheck(int *b, int n)
{
   
    vector<int> a;
    for(int i = 0;i<n;i++)
    {
        a.push_back(b[i]);
    }
    sort(a.begin(),a.end());
    
//    for(int i:a)
//        cout<<i<<"->";
    
    int count=0;
    for(int i = 0;i<n;i++)
    {
        if(a[0]==b[i])
        {
            return count;
        }
        else
        {
            count++;
        }
    }
    return 0;
 
}
