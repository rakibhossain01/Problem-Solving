#include<iostream>
using namespace std;

int main()
{
    int n,a,i;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a>10)
        {
            cout<<a-10<<" "<<"10"<<endl;
        }
        else
        {
            cout<<"0 "<<a<<endl;
        }
    }
}
