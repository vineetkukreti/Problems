#include<stdio.h>
void  rotate_right(int a[],int n)
{
    int temp = a[0];
    for(int i = 0;i<n;i++)
    {
        a[i] = a[i+1];
    }
    a[n-1] = temp;
 
}
int main()
{
    int n,times;
    printf("Enter no of element = ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter how many you want to shift : ");
    scanf("%d",&times);
    for(int i = 0;i<times;i++)
    {
    rotate_right(a,n);
    }
   for(int i = 0;i<n;i++)

    {
        printf("%d ",a[i]);
    }
}