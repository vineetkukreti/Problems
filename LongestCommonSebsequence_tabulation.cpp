#include <iostream>
#include<vector>
using namespace std;
int main()
{
    string s1,s2;
    s1 = "vadieneet";
    s2 = "vsiwfnsefests";
    int n,m;
    n = s1.length();
    m = s2.length();
    
    int dp[n+1][m+1];
     for(int i = 0;i<=n;i++)
    {
        for(int j = 0;j<=m;j++)
        {
            dp[i][j] = 0;
        }
    }
    
    
      for(int i = 0;i<=n;i++)
    {
        for(int j = 0;j<=m;j++)
        {
            if(i==0||j==0)
            {
                 dp[i][j] = 0;
                 continue;
            }
            else{
                
                if(s1[i-1]==s2[j-1])
                    dp[i][j] = 1+dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
            
        }
    }
    cout<<dp[n][m];
    

    return 0;
}

