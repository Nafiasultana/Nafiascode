#include<iostream>
using namespace std;

int main()
{
    int arr[50],size,i,del,count=0;
    cout<<"Enter array size: ";
    cin>>size;
    cout<<"Enter array element:\n";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to be delete: ";
    cin>>del;
    for(i=0;i<size;i++)
    {
        if(arr[i]==del)
        {
            for(int j=i;j<(size-1);j++)
            {
                arr[j]=arr[j+1];
            }
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"Element not found: ";
    }
    else
    {
        cout<<"New array\n";
        for(i=0;i<(size-1);i++)
        {
            cout<<arr[i]<<" ";
        }

    return 0;
    }

}
