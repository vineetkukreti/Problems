#include<iostream>
using namespace std;
int part(int a[],int l,int h)
{
	int p = a[h];
	int i = l-1;
	for(int j = l;j<=h-1;j++)
	{
		if(a[j]<p)
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[h]);
	return i+1;
}

void quicksort(int a[],int l,int h)
{
	int p;
	if(l<h)
	{
		p = part(a,l,h);
		quicksort(a,l,p-1);
		quicksort(a,p+1,h);
	}
}
int main()
{
	int n;
	cout<<"Enter the size of the array :";
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"**********************"<<endl;
	quicksort(a,0,n-1);
	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
