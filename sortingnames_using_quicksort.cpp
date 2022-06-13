#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
void merge(int a[],int low,int mid,int high)
{
	int i = low;
	int b[100];
	int j = mid+1,k = low;
	while(i<=mid&&j<=high)
	{
		if(a[i]<a[j])
			{
				b[k] = a[i];
				i++;
			}
			else
			{
				b[k] = a[j];
				j++;
			}
			k++;
	}
	while(i<=mid)
	{
		b[k] = a[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		b[k] = a[j];
		k++;
		j++;
	}
	for(int i = low;i<=high;i++)
	{
		a[i] = b[i];
	}
}
void merge_sort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid = (low+high)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,low,mid,high);
	}
	
}
int main()
{
        char str[5][20], t[20];
        int n = sizeof(str)/sizeof(str[0][0]);
        cout<<n;
        int i, j;
        cout<<"\n Enter Any Five Names : \n\n";
        for(i=0; i<5; i++)
        {
                cout<<" ";
                cin>>str[i];
        }
       merge_sort(str,0,n-1);
        cout<<"\n Names Sorted in Alphabetical Order : \n\n";
        for(i=0; i<5; i++)
        {
                cout<<" ";
                cout<<str[i]<<"\n";
        }
        return 0;
}
