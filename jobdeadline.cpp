
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t[n];
    for(int i=0; i<n; i++) cin>>t[i];
    for(int i=0; i<n; i++)
    {
        int p=-1,index;
        for(int i=0; i<n; i++)
        {
            if(t[i]!=-1&&p==-1)
            {
                p=t[i];
                index=i;
            }
            else if(t[i]!=-1)
            {
                if(t[i]<p)
                {
                    p=t[i];
                    index=i;
                }
            }
        }
        cout<<"Index "<<index+1<<" value "<<t[index]<<endl;
        t[index]=-1;
    }
    cout<<endl;
    return 0;
}
