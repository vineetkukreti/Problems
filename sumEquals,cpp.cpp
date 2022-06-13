#include<iostream>
using namespace std;
int main()
{
	int a[] = {56 ,10 ,72 ,91 ,29, 3, 41 ,45 ,61 ,20 ,11 ,39, 9, 12, 94};
	int n = sizeof(a)/sizeof(a[0]);
	int key = 302;
int i = 0,j=0;
while(i<n/2&&j<n)
{
	if(a[i]+a[j]==key&&i!=j)
	{
		
	cout<<a[i]<<"  "<<a[j]<<endl;
	return 0;
	}
	j++;
	if(i!=n/2&&j==n)
	{
		i++;
		j=0;
	}
	
	
}
cout<<"NOT present "<<endl;    
}
