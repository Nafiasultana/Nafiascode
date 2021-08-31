#include<iostream>
using namespace std;
void found (int a,int b);
void scarch();

string base,scarh;
int s=0;

int main()
{
    cout<<"Base string"<<endl;
    cin>>base;
    cout<<"Search string"<<endl;
    cin>>scarh;

    scarch();

    if(s==0)
    {
        cout<<"Not Found"<<endl;
    }

}
void scarch()
{
    int i,j,cou=0;

    for(i=0;i<base.size();i++)
    {
        cou=0;
        int x=i;
        for(j=0;j<scarh.size();j++)
        {
            if(base[i]==scarh[j])
            {
                cou++;
            }
            if(cou==scarh.size())
            {
                found(i-j,i+scarh.size()-1-j);
            }
            i++;

        }
        i=x;
    }


}
void found(int a,int b)
{
    cout<<"string is found in index no : "<<a<<"  to "<<b<<endl;
    s++;
}
