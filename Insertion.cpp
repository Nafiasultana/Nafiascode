#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int arr[50],size,insert,i,pos;
    cout<<"Enter to number of array: ";
    cin>>size;
    cout<<"Enter array elements:\n";
    for(i=0;i<size;i++)
        {
            cin>>arr[i];
        }

    cout<<"Enter element to be insert: ";
    cin>>insert;
    cout<<"Enter position or index number: ";
    cin>>pos;
    for(i=size;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=insert;
    cout<<"New array is:\n";
    for(i=0;i<size+1;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
