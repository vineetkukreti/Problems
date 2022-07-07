#include<iostream>
using namespace std;


int main(){

       int S,E,W,C;
    	cin>>S;
    	cin>>E;
    	cin>>W;
       while(S<=E)
       {
           C = (S - 32) * 5/9;
        	cout<<S<<" "<<C<<endl;
           S+=W;
       }
  
}

