#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void insert(int [],int);
void delete1(int [],int);
int main()
{
    int i,n,a[50];
    cout<<"enter the size of array: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"first array : ";
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    insert(a,n);
    delete1(a,n);
    return 0;
}
void insert(int a[50],int n)
{
    int i,loc,key;
    cout<<"\nenter the location at which you want to insert the element : ";
    cin>>loc;
    cout<<"\nenter the new key elememt to be inserted : ";
    cin>>key;
    for(i=n;i>=loc;i--)
    {
        a[i+1]=a[i];
    }
    a[loc]=key;
    cout<<"\nafter insertion\n";
    for(i=1;i<=n+1;i++)
    {
        cout<<a[i]<<" ";
    }
}
void delete1(int a[50],int n)
{
    int i,loc,key;
    cout<<"\nenter the loaction from where you want to delete the element : ";
    cin>>loc;
    key=a[loc];
    cout<<"\nthe element that has been deleted from array is : "<<key;
    for(i=loc;i<=n;i++)
    {
        a[i]=a[i+1];
    }
    cout<<"\nafter deletion: \n";
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}