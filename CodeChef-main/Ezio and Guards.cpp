#include<iostream>
using namespace std;

int main()
{
    int n,a,b,i;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>=b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
