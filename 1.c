/*
Q1. Write a the C program to create an array by inserting  N elements in it then find second non repeating element from 
    the array.
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of element : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements :",n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter %d elements :");
    for(int i = 0;i<n;i++)
    {
        printf("%d",a[i]);
            }
    return 0;
}