#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void ascending(int [],int);
void descending(int [],int);
int main()
{
    int i,n,a[50];
    cin>>n;
    cout<<"enter the size of array : ";
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"first array : ";
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    ascending(a,n);
    descending(a,n);
    return 0;
}
void ascending(int a[50],int n)
{
    int i,j,temp=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=a[i];
            }

        }
    }
    cout
}